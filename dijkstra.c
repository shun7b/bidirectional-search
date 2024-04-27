#include<stdio.h>
#include<time.h>
#define TIME 10000
#define INF 513 
#define MAP_SIZE 128 
#define WIDTH 16 
#define HIGH 8 
void dijkstra(int g,int s);
void distset();
void koubaihou(int g,int s);
void block_all_set(int block[]);
int push_block(int block_plots[],int target_plot);
void block_reset(int map_r);
void block_set(int map);
int put_block(int after_block[]);
void block_wall_set(void);
void put_dynamic(void);
int n=256;
int set_plot_block;
int dist[256][256];
int cost[256];
char used[256];
int loot[111];
int loot_count=0;
int block_push_point=0;
int flag_p[100][2];
int flag[100];
int save[2];
int plot[]={
 0,    1,    2,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
  16,   18,   20,   24,   31,
  32,   34,   38,   40,   42,   44,   45,   47,
  48,   50,   51,   52,   53,   54,   58,   63,
  64,   70,   71,   73,   76,   77,   79,
  80,   82,   84,   86,   87,   89,   90,   91,   92,   93,   95,
  96,   98,  100,  108,  111,
 112,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,  127
};
int walls_value=sizeof(plot)/sizeof(plot[0]);

long clock_value[MAP_SIZE][MAP_SIZE];
long start_clock,end_clock;
FILE *filemap;
char filename[20];
char stimes[50];
void  main(){
	int goal,start;
	int count_plot=0;
	int times;
	int i,j,k,times_search,plot_1,plot_2;
	int check_load_count=0;
	int dis_cost;
	int value_route;
	int x;
	printf("hey");
	for(i=17;i<18;i++){
		for(k=109;k<110;k++){
			save[0]=0;
			save[1]=0;
			for(j=0;j<walls_value;j++){
				if(plot[j]==i){
					save[0]=1;
				}
				if(plot[j]==k){
					save[1]=1;
				}
			}
			if((save[0]==0)&&(save[1]==0)&&(i!=k)){
				start=i;
				goal=k;
				for(plot_1=0;plot_1<MAP_SIZE;plot_1++){
					for(plot_2=0;plot_2<MAP_SIZE;plot_2++){
						dist[plot_1][plot_2]=INF;
					}
				}
			 	distset(); 
 				block_all_set(plot);
//				for(times_search=0;times_search<TIME;times_search++){
					for(x = 0; x < n; x++){
						cost[x] = INF;
						used[x] = 0;
					}
 					dijkstra(goal,start);
			
				//}
				clock_value[i][k]=end_clock-start_clock;
				sprintf(filename,"./map%d_%d.txt",i,k);
				filemap=fopen(filename,"a");
				koubaihou(goal,start);
				sprintf(stimes,"start%dgoal%dclock%d\n",i,k,clock_value[i][k]);	
				stimes[49]='\0';
				if(fputs(&stimes,filemap)==EOF){
					printf("error");
				}
				for(dis_cost=0;dis_cost<MAP_SIZE;dis_cost++){
					sprintf(stimes,"%3d,",cost[dis_cost]);	
					stimes[49]='\0';
					if(fputs(&stimes,filemap)==EOF){
						printf("error");
					}
					if((dis_cost%WIDTH)==(WIDTH-1)){
						sprintf(stimes,"\n",cost[dis_cost]);	
						stimes[49]='\0';
						if(fputs(&stimes,filemap)==EOF){
							printf("error");
						}
					}
				}
				fclose(filemap);
			}
		}
	}
	printf("\n");
	check_load_count=0;
	printf("%d node",check_load_count);
}
//マップ生成
void distset(){
	int count;
	for(count=0;count<MAP_SIZE;count++){
		if((count+1)<MAP_SIZE&&((count/WIDTH)==((count+WIDTH)/WIDTH))){
			dist[count][count+1]=1;
			dist[count+1][count]=1;
		}
		if((count+WIDTH)<MAP_SIZE){
			dist[count][count+WIDTH]=1;
			dist[count+WIDTH][count]=1;
		}
		if(((count-1)>=0)&&((count/WIDTH)==((count-1)/WIDTH))){
			dist[count][count-1]=1;
			dist[count-1][count]=1;
		}
		if((count-WIDTH)>=0){
			dist[count][count-WIDTH]=1;
			dist[count-WIDTH][count]=1;
		}
		cost[count]=0;
	}
}
//ブロック初期化
void block_all_set(int block[]){
	int count_b=0;
	int count_map;
	int size = sizeof(plot) / sizeof(int);
	count_map=0;
	for(count_map=0;count_map<size;count_map++){
		block_set(block[count_map]);
	}
}
void block_set(int map){
	if(((map+1)<MAP_SIZE)&&((map/WIDTH)==((map+1)/WIDTH))){
		dist[map][map+1]=INF;
		dist[map+1][map]=INF;
	}
	if(((map-1)>=0)&&((map/WIDTH)==((map-1)/WIDTH))){
		dist[map][map-1]=INF;
		dist[map-1][map]=INF;
	}
	if((map+WIDTH)<MAP_SIZE){
		dist[map][map+WIDTH]=INF;
		dist[map+WIDTH][map]=INF;
	}
	if((map-WIDTH)>=0){
		dist[map][map-WIDTH]=INF;
		dist[map-WIDTH][map]=INF;
	}
	cost[map]=INF;
}
void dijkstra(int g,int s){
	int x,  min,buf;
	start_clock=clock();
	cost[g] = 0;
	while(1){
		min = INF;
		for(x = 0; x < n; x++){
			if(!used[x] && min > cost[x]){
				buf=x;
				min = cost[x];
			}
		}
		if(min == INF){
			end_clock=clock();
			break;
		}
				//for(x = 0; x < n; x++){
				x=buf+1;
				if(cost[x] > dist[x][buf] + cost[buf]){
					cost[x] = dist[x][buf] + cost[buf];
				}
				x=buf-1;
				if(cost[x] > dist[x][buf] + cost[buf]){
					cost[x] = dist[x][buf] + cost[buf];
				}
				
				x=buf+WIDTH;
				if(cost[x] > dist[x][buf] + cost[buf]){
					cost[x] = dist[x][buf] + cost[buf];
				}
				x=buf-WIDTH;
				if(cost[x] > dist[x][buf] + cost[buf]){
					cost[x] = dist[x][buf] + cost[buf];
				}
			//}
				used[buf]=1;
				if(buf==s){
					end_clock=clock();
					return ;
				}
	}
}
void koubaihou(int g,int s){
	int nowplot=s;
	int nextplot=s;
	int times=0;
	int one_loot[20];
	int count_block=0;
	count_block=0;
	while(1){
		sprintf(stimes,"%3d,",nowplot);	
		stimes[49]='\0';
		if(fputs(&stimes,filemap)==EOF){
			printf("error");
		}
		if(nowplot==g){
			break;
		}
		if(dist[nowplot][nowplot+1]!=INF/*&&((nowplot+1)<256)*/){
			nextplot=nowplot+1;
		}
		if(dist[nowplot][nowplot-1]!=INF/*&&((nowplot-1)>=0)*/){
			if(cost[nextplot]>cost[nowplot-1]){
				nextplot=nowplot-1;
			}
		}
		if((dist[nowplot][nowplot-WIDTH]!=INF)/*&&(nowplot-WIDTH)>=0*/){
			if(cost[nextplot]>cost[nowplot-WIDTH]){
				nextplot=nowplot-WIDTH;
			}
		}
		if(dist[nowplot][nowplot+WIDTH]!=INF/*&&((nowplot+WIDTH)<256)*/){
			if(cost[nextplot]>cost[nowplot+WIDTH]){
				nextplot=nowplot+WIDTH;
			}
		}
		nowplot=nextplot;
		count_block++;
	}
}
