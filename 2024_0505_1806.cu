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
#define WALL_GPU  (1024*1024-1)
#define ROAD 0 
#define WIDTH 128 
#define HEIGHT 64 
#define MAPSIZE (WIDTH*HEIGHT) 
#define WALL (MAPSIZE*8 -1)
//#define N  524288/* 配列の長さ、2の30乗 
 /* GPUカーネル関数の定義*/
 __global__ void bidirectional_search(int *kk,int *Dend,int *Barray,int *j,int *DA,int *s,int *g,int *start,int *goal,int *end_sg)
 {
	int i = blockIdx.x * blockDim.x + threadIdx.x;
	if(i>=(((MAPSIZE)*(MAPSIZE)))){
	return;
	}
    __syncthreads();
	if(*end_sg==1){	
			return;
	}
		
		
    __syncthreads();
		if(*j==1){
    __syncthreads();
			Barray[i]=0;
    __syncthreads();
		if(MAPSIZE>i){
			Dend[i]=WALL;
    __syncthreads();
			s[i]=0;
    __syncthreads();
			kk[i]=0;
    __syncthreads();
			g[i]=0;
		}
		}
	s[*start]=1;
    __syncthreads();
	kk[*start]=((MAPSIZE)/2);
    __syncthreads();
	Barray[(*start)*MAPSIZE+(i%MAPSIZE)]=1;
    __syncthreads();
	g[*goal]=1;
    __syncthreads();
	kk[*goal]=0;
    __syncthreads();
	Barray[(*goal)*MAPSIZE+(i%MAPSIZE)]=1;
    __syncthreads();
	if((i/MAPSIZE)!=(*start)&&((i/MAPSIZE)!=(*goal))&&DA[i/MAPSIZE]!=WALL&&DA[i%MAPSIZE]!=WALL){
    __syncthreads();
			if(((s[(i)/MAPSIZE+1]|s[(i)/MAPSIZE-1]|s[(i)/MAPSIZE+WIDTH]|s[(i)/MAPSIZE-WIDTH])>=1)&&((g[(i)/MAPSIZE+1]|g[(i)/MAPSIZE-1]|g[(i)/MAPSIZE+WIDTH]|g[(i)/MAPSIZE-WIDTH])>=1)&&s[i/MAPSIZE]==0&&g[i/MAPSIZE]==0){
    __syncthreads();
				kk[i/MAPSIZE]=((MAPSIZE)/2)-(*j);
    __syncthreads();
				*end_sg=1;	
    __syncthreads();
					Barray[i/MAPSIZE*MAPSIZE+i%MAPSIZE]=Barray[(i/MAPSIZE+WIDTH)*MAPSIZE+i%MAPSIZE]|Barray[(i/MAPSIZE-1)*MAPSIZE+i%MAPSIZE]|Barray[(i/MAPSIZE+1)*MAPSIZE+i%MAPSIZE]|Barray[i/MAPSIZE-WIDTH*MAPSIZE+i%MAPSIZE];
    
    __syncthreads();
			if(Barray[i/MAPSIZE*MAPSIZE+i%MAPSIZE]==1){
    __syncthreads();
					Dend[i%MAPSIZE]=kk[i%MAPSIZE];
    __syncthreads();
			}
			s[i/MAPSIZE]=s[(i)/MAPSIZE+1]|s[i/MAPSIZE-1]|s[(i)/MAPSIZE+WIDTH]|s[(i)/MAPSIZE-WIDTH];
    __syncthreads();
			g[i/MAPSIZE]=g[(i)/MAPSIZE+1]|g[i/MAPSIZE-1]|g[(i)/MAPSIZE+WIDTH]|g[(i)/MAPSIZE-WIDTH];
    __syncthreads();
return;
}
		if(((s[((i)/MAPSIZE)]|s[(i)/MAPSIZE-1]|s[(i)/MAPSIZE+WIDTH]|s[(i)/MAPSIZE-WIDTH])>=1||(g[(i)/MAPSIZE+1]|g[(i)/MAPSIZE-1]|g[(i)/MAPSIZE+WIDTH]|g[(i)/MAPSIZE-WIDTH])>=1)){
    __syncthreads();

		 if(s[i/MAPSIZE]==0&&(s[i/MAPSIZE+1]|s[i/MAPSIZE-1]|s[i/MAPSIZE+WIDTH]|s[i/MAPSIZE-WIDTH])==1){
    __syncthreads();
				kk[i/MAPSIZE]=((MAPSIZE)/2)-(*j);
    __syncthreads();
					Barray[i/MAPSIZE*MAPSIZE+i%MAPSIZE]=Barray[(i/MAPSIZE+WIDTH)*MAPSIZE+i%MAPSIZE]|Barray[(i/MAPSIZE-1)*MAPSIZE+i%MAPSIZE]|Barray[(i/MAPSIZE+1)*MAPSIZE+i%MAPSIZE]|Barray[i/MAPSIZE-WIDTH*MAPSIZE+i%MAPSIZE];
    __syncthreads();
    				kk[i/MAPSIZE]=((MAPSIZE)/2)-(*j);
    __syncthreads();
return;
		}
		 if(g[i/MAPSIZE]==0&&(g[i/MAPSIZE+1]|g[i/MAPSIZE-1]|g[i/MAPSIZE+WIDTH]|g[i/MAPSIZE-WIDTH])==1){
    __syncthreads();
				kk[i/MAPSIZE]=(*j);
    __syncthreads();
					Barray[i/MAPSIZE*MAPSIZE+i%MAPSIZE]=Barray[(i/MAPSIZE+WIDTH)*MAPSIZE+i%MAPSIZE]|Barray[(i/MAPSIZE-1)*MAPSIZE+i%MAPSIZE]|Barray[(i/MAPSIZE+1)*MAPSIZE+i%MAPSIZE]|Barray[i/MAPSIZE-WIDTH*MAPSIZE+i%MAPSIZE];
    __syncthreads();
        __syncthreads();
			g[i/MAPSIZE]=g[(i)/MAPSIZE+1]|g[i/MAPSIZE-1]|g[(i)/MAPSIZE+WIDTH]|g[(i)/MAPSIZE-WIDTH];
    __syncthreads();
return;
		}
return;
}
return;
}
return;
}
int main(void)
 {
 int *i;
// int j;
 int *start_gpu,*goal_gpu;	
 int *start,*goal;	
 int *start_flag,*goal_flag;
 int *Dstart_flag,*Dgoal_flag;
 int *ROUTE;
 int *A; /* ホストメモリ用のポインタ*/
 long start_time,end_time,pre_time_start,pre_time_end;
 int *ii;
 int *end,*gend;
 int *array;
 int *wall_end;
 int *Dwall_end;
 int *Darray;
 int j=0;
 int *kkcpu;
 int *kkgpu;
	printf("\nney\n");
  kkcpu=(int *)malloc(sizeof(int)*(MAPSIZE)); /* 配列Aの領域確保*/
 wall_end = (int *)malloc((MAPSIZE) *sizeof(int));
 array = (int *)malloc((MAPSIZE)*(MAPSIZE)*sizeof(int));
     // 各行ごとに列数分のメモリを確保
  ROUTE=(int *)malloc(sizeof(int)*(MAPSIZE)); /* 配列Aの領域確保*/
  goal_flag = (int *)malloc(sizeof(int)*(MAPSIZE)); /* 配列Aの領域確保*/
  start = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
  goal = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
  i = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
		printf("\nney\n");
  start_flag = (int *)malloc(sizeof(int)*(MAPSIZE)); /* 配列Aの領域確保*/
		printf("\nney\n");
		printf("\nney\n");
		printf("\nney\n");
  end = (int *)malloc(sizeof(int)); /* 配列Aの領域確保*/
		printf("\nney\n");
  *end=0;
		printf("\nney\n");
  *start=WIDTH+1;
		printf("\nney\n");
  *goal=(MAPSIZE)-WIDTH-2;
		printf("\nney\n");
  start_flag[*start]=1;
		printf("\nney\n");
  goal_flag[*goal]=1;
		printf("\nneyggggggggg\n");
  	  for(int in=0;in<(MAPSIZE);in++){
		if((in/WIDTH)==0||(in/WIDTH)==HEIGHT-1){
				ROUTE[in]=WALL;
		}else if((in%WIDTH)==0||(in%WIDTH)==WIDTH-1){
				ROUTE[in]=WALL;
		}else if((in/WIDTH)%2==1){
				ROUTE[in]=ROAD;
		}else if((in/WIDTH)%2==0){
			if((in%WIDTH)%2==0){
				ROUTE[in]=ROAD;
			}else{
				ROUTE[in]=WALL;
			}
		}
		wall_end[*i]=0;
	}
 /* 配列A (GPU) の領域確保*/
 pre_time_start=clock();
 cudaMalloc((int**)&kkgpu, sizeof(int)*(MAPSIZE)); 
 cudaMalloc((int**)&Dwall_end, sizeof(int)*MAPSIZE); 
 cudaMalloc((int**)&Darray, sizeof(int)*(MAPSIZE)*(MAPSIZE)); 
	printf("s%04d,g%d\n",*start,*goal);
 cudaMalloc((int**)&ii, sizeof(int)); 
 cudaMalloc((int**)&A, sizeof(int)*(MAPSIZE)); 
 cudaMalloc((int**)&Dgoal_flag, sizeof(int)*(MAPSIZE)); 
 cudaMalloc((int**)&Dstart_flag, sizeof(int)*(MAPSIZE)); 
 cudaMalloc((int**)&start_gpu, sizeof(int)); 
 cudaMalloc((int**)&goal_gpu, sizeof(int)); 
 cudaMalloc((int**)&gend, sizeof(int)); 
/* ホストメモリからデバイスメモリへコピー*/
 cudaMemcpy( start_gpu,start, sizeof(int), cudaMemcpyDefault);
 cudaMemcpy( goal_gpu,goal, sizeof(int), cudaMemcpyDefault);
 pre_time_end=clock();
	printf("pre_time=%ld\n",pre_time_end-pre_time_start);
	for(*i=0;*i<(MAPSIZE);*i=(*i+1)){	
		printf("%4d,",ROUTE[*i]);
		if((*i%WIDTH)==(WIDTH-1)){
			printf("\n");
		}
	}
 /* GPUカーネル関数呼び出し*/
	start_time=clock();
	for(*i=1;(*i)<MAPSIZE;*i=(*i+1)){
 		cudaMemcpy( kkgpu,kkcpu, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( Dwall_end,wall_end, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
	 	cudaMemcpy(Darray ,array,sizeof(int)*(MAPSIZE)*(MAPSIZE),cudaMemcpyDefault); 


 		cudaMemcpy( ii,i, sizeof(int), cudaMemcpyDefault);
 		cudaMemcpy( A,ROUTE, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( Dgoal_flag,goal_flag, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( Dstart_flag,start_flag, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( gend,end ,sizeof(int), cudaMemcpyDefault);
		bidirectional_search<<<((MAPSIZE*MAPSIZE)+BS-1)/BS, BS,2>>>(kkgpu,Dwall_end ,Darray   ,ii,A,Dstart_flag,Dgoal_flag,start_gpu,goal_gpu,gend);
		cudaDeviceSynchronize();
 		cudaMemcpy( wall_end,Dwall_end, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
		cudaMemcpy(array,Darray ,sizeof(int)*(MAPSIZE)*(MAPSIZE),cudaMemcpyDefault); 
 		cudaMemcpy( ROUTE,A, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( start_flag,Dstart_flag, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( goal_flag,Dgoal_flag, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
 		cudaMemcpy( end,gend ,sizeof(int), cudaMemcpyDefault);
 		cudaMemcpy( kkcpu,kkgpu, sizeof(int)*(MAPSIZE), cudaMemcpyDefault);
		if(*end==1){
				j++;
				if(j>1){
					break;
				}
			
}
}
	cudaFree(Dstart_flag);
	end_time=clock();
	for(*i=0;*i<(MAPSIZE);*i=(*i+1)){	
		printf("%4d,",wall_end[*i]);
		ROUTE[*i]=wall_end[*i];
		if((*i%WIDTH)==(WIDTH-1)){
			printf("\n");
		}
	}
	cudaFree(Dstart_flag);
	cudaFree(Dgoal_flag);
	cudaFree(A);
	cudaFree(A);
	cudaFree(Dwall_end);
	cudaFree(start_gpu);
	cudaFree(ii);
	cudaFree(goal_gpu);
	cudaFree(Darray);
	cudaFree(gend);
	cudaFree(Dwall_end);
	free(i);
	free(end);
	free(array);
	free(wall_end);
	printf("s%04d,g%d\n",*start,*goal);
	printf("exe_time=%ld\n,",(end_time-start_time));
		int nowplot,nextplot;
		int count;
		int *result;
		  result= (int *)malloc(sizeof(int)*(MAPSIZE)); /* 配列Aの領域確保*/
					nowplot=(*start);
					nextplot=(*start);
						
					count=0;
					while(nowplot!=(*goal)){
						printf("%d ", nowplot);
						result[count]=nowplot;
						if(ROUTE[nowplot-1]!=-1){
							if(ROUTE[nextplot]>=ROUTE[nowplot-1]){
								nextplot=nowplot-1;
							}
						}
						if(ROUTE[nowplot+1]!=-1){
							if(ROUTE[nextplot]>=ROUTE[nowplot+1]){
								nextplot=nowplot+1;
							}
						}
						if(ROUTE[nowplot+WIDTH]!=-1){
							if(ROUTE[nextplot]>=ROUTE[nowplot+WIDTH]){
								nextplot=nowplot+WIDTH;
							}
						}
						if(ROUTE[nowplot-WIDTH]!=-1){
							if(ROUTE[nextplot]>=ROUTE[nowplot-WIDTH]){
								nextplot=nowplot-WIDTH;
							}
						}
						nowplot=nextplot;        
						count++;
					}
					result[count]=(*goal);
					count=0;
					while(result[count]!=(*goal)){
						printf(" %d ",result[count]);
						count++;
					}
	free(ROUTE);
	free(start);
	free(goal);
	printf("exe_time=%ld\n,",(end_time-start_time));
	return 0;
 }
