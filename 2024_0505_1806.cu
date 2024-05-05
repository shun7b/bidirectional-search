#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <assert.h>

// CUDA runtime
#include <cuda_runtime.h>
#include <cuda_profiler_api.h>

// Helper functions and utilities to work with CUDA
#include <helper_functions.h>
#include <helper_cuda.h>

#define BS 1024
#define WALL 1023 
#define WALL_GPU  (1024*1024-1)
#define ROAD 0 
#define WIDTH 16 
#define HEIGHT 8 
#define MAPSIZE ((int)WIDTH*HEIGHT) 
//#define N  524288/* 配列の長さ、2の30乗 
#define BS 1024 
 /* GPUカーネル関数の定義*/
 __global__ void bidirectional_search(int *j,int *DA,int *s,int *g,int *start,int *goal,int *count,int *end_sg)
 {
	int loop=0;
	int  sync_num=0;
	int ste[MAPSIZE];
	int i = blockIdx.x * blockDim.x + threadIdx.x;
	int map_in[MAPSIZE];
//	int s[MAPSIZE],g[MAPSIZE];
	if(i>=MAPSIZE){

		return;
	}
			
	if(*j%2==0){
		if((i/WIDTH)%2==0){
			if(i%2==0){
				return;	
			}
		}else{
			if(i%2==1){
				return;	
			}
		}
	}else{
		if((i/WIDTH)%2==1){
			if(i%2==0){
				return;	
			}
		}else{
			if(i%2==1){
				return;	
			}
		}
	}
	
//	A[i]=1;
//		return;
		//}

	if(DA[i]!=WALL){
		if(!(s[i]>=1&&g[i]>=1)){
		if(s[i]!=(s[i+1]|s[i-1]|s[i+WIDTH]|s[i-WIDTH])){
			DA[i]=(MAPSIZE/2)-*j;
		}
		if(g[i]!=(g[i+1]|g[i-1]|g[i+WIDTH]|g[i-WIDTH])){
			DA[i]=*j;
		}
		}
//	for(loop=1;loop<(MAPSIZE);++loop){
//		[	if(i!=1){	ZZ++
			s[i]=s[i+1]|s[i-1]|s[i+WIDTH]|s[i-WIDTH];
			g[i]=g[i+1]|g[i-1]|g[i+WIDTH]|g[i-WIDTH];
//			}
			if(s[i]>=1&&g[i]>=1){
				DA[i]=*j;
				*end_sg=1;	
			}
								

//		}
//	}	}
	 
		//	break;
		//[	]
		}

	s[*start]=1;
	g[*goal]=1;
		
	//	break;
		
}
int main()
 {
 int *i;
 int j;
 int *start_gpu,*goal_gpu;	
 int *start,*goal;	
 int *start_flag,*goal_flag;
 int *Dstart_flag,*Dgoal_flag;
 int *ROUTE;
 int *A; /* ホストメモリ用のポインタ*/
 int *DA;   /* デバイスメモリ用のポインタ*/
 long start_time,end_time,pre_time_start,pre_time_end,ret_time_start,ret_time_end;
 int *map;
 int *ii;
 int *end,*gend;
	
  ROUTE = (int *)malloc(sizeof(int)*MAPSIZE); /* 配列Aの領域確保*/
  goal_flag = (int *)malloc(sizeof(int)*MAPSIZE); /* 配列Aの領域確保*/
  i = (int *)malloc(sizeof(int)*MAPSIZE); /* 配列Aの領域確保*/
  start_flag = (int *)malloc(sizeof(int)*MAPSIZE); /* 配列Aの領域確保*/
  map = (int *)malloc(sizeof(int)*MAPSIZE); /* 配列Aの領域確保*/
  start = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
  goal = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
  end = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
  *end=0;
  *start=WIDTH+2;
  *goal=MAPSIZE-WIDTH-3;
  start_flag[*start]=1;
  goal_flag[*goal]=1;
  	  for(*i=0;*i<MAPSIZE;*i=*i+1){
		if((*i/WIDTH)==0||(*i/WIDTH)==HEIGHT-1){
			ROUTE[*i]=WALL;
		}else if((*i%WIDTH)==0||(*i%WIDTH)==WIDTH-1){
				ROUTE[*i]=WALL;
		}else if((*i/WIDTH)%2==1){
				ROUTE[*i]=ROAD;
		}else if((*i/WIDTH)%2==0){
			if((*i%WIDTH)%2==0){
				ROUTE[*i]=ROAD;
			}else{
				ROUTE[*i]=WALL;
			}
		}
	}
	for(*i=0;*i<MAPSIZE;*i=*i+1){	
		printf("%04d,",ROUTE[*i]);
		if((*i%WIDTH)==(WIDTH-1)){
			printf("\n");
		}
	}
	printf("s%04d,g%d\n",*start,*goal);
 /* 配列A (GPU) の領域確保*/
 pre_time_start=clock();
 cudaMalloc((int**)&Dstart_flag, sizeof(int)*MAPSIZE); 
 cudaMalloc((int**)&Dgoal_flag, sizeof(int)*MAPSIZE); 
 cudaMalloc((int**)&DA, sizeof(int)*MAPSIZE); 
 cudaMalloc((int**)&A, sizeof(int)*MAPSIZE); 
 cudaMalloc((int**)&start_gpu, sizeof(int)); 
 cudaMalloc((int**)&goal_gpu, sizeof(int)); 
 cudaMalloc((int**)&ii, sizeof(int)); 
 cudaMalloc((int**)&gend, sizeof(int)); 
/* ホストメモリからデバイスメモリへコピー*/
 cudaMemcpy(DA, map, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
 cudaMemcpy( start_gpu,start, sizeof(int), cudaMemcpyDefault);
 cudaMemcpy( goal_gpu,goal, sizeof(int), cudaMemcpyDefault);
 cudaMemcpy( gend,end, sizeof(int), cudaMemcpyDefault);
 pre_time_end=clock();
	printf("pre_time=%ld\n",pre_time_end-pre_time_start);
 /* GPUカーネル関数呼び出し*/
	start_time=clock();
	for(*i=0;;*i=*i+1){
 		cudaMemcpy( ii,i, sizeof(int), cudaMemcpyDefault);
 		cudaMemcpy( A,ROUTE, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
 		cudaMemcpy( Dstart_flag,start_flag, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
 		cudaMemcpy( Dgoal_flag,goal_flag, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
 		cudaMemcpy( gend,end ,sizeof(int), cudaMemcpyDefault);
		bidirectional_search<<<(MAPSIZE+BS-1)/BS, BS>>>(ii,A,Dstart_flag,Dgoal_flag,start_gpu,goal_gpu,i,gend);
 		cudaMemcpy( start_flag,Dstart_flag, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
 		cudaMemcpy( goal_flag,Dgoal_flag, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
 		cudaMemcpy( end,gend ,sizeof(int), cudaMemcpyDefault);
 		cudaMemcpy( ROUTE,A, sizeof(int)*MAPSIZE, cudaMemcpyDefault);
//	printf("\n-----------------------ends\n");
		if(*end==1){
			if(j>2){
					break;
			}
			j++;
			
		}
	}
//	cudaStreamSynchronize(stream);
	end_time=clock();
		
	printf("exe_time=%ld\n,",(end_time-start_time));
	for(*i=0;*i<MAPSIZE;*i=*i+1){	
		printf("%4d,",ROUTE[*i]);
		if((*i%WIDTH)==(WIDTH-1)){
			printf("\n");
		}
	}
 ret_time_start=clock();
	cudaFree(DA);
	cudaFree(A);
	cudaFree(start_gpu);
	cudaFree(ii);
	cudaFree(goal_gpu);
	free(ROUTE);
	free(i);
	free(map);
	return;
 }
