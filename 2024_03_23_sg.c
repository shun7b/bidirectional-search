#include<stdio.h> 
#include<time.h>
#define TIME 1
#define START 256 
#define WALL -1
#define ROAD 128
#define GOAL 0 
#define MAPSIZE 128 
#define WIDTH 16 
#define EVEN 8 
int map_display[MAPSIZE];
int map_org[MAPSIZE]={
 WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL,
 WALL, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, WALL,
 WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, WALL,
 WALL, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, WALL,
 WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, WALL,
 WALL, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD, WALL,
 WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, WALL,
 WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL

  };
int map[6][MAPSIZE];
int map_sig_array[MAPSIZE][MAPSIZE];
int maps[MAPSIZE][MAPSIZE];
int main(void){
	int clock_count=1;
	int mapafter[MAPSIZE];
	int plot_value=0;
	int sub_plot[MAPSIZE];
	int lr_min,ud_min,add_min;
	int sub_plot_all=0;
	int nowplot=0;
	int nextplot=0;
	int wari=0;
	int start;
	int goal;
	int open_flag=0;
	int wari_moto;
	int count=0;
	int subs[MAPSIZE];
	int result[MAPSIZE];
	int oto;
	int wall_t=0,wall_ts=0;
	int count_value;
	int even=0;
	int  end_potential=0;
	int evens=0;
	int end_times=0;
	int map_pass=0;
	int chenge_flag=0;
	int chenge_flag_all=0;
	int j;
	long start_clock, end_clock,exit;
	int flag_marge=0;
	int begin_point,end_point,i;
	int calculate_flag=0;
//	for(oto=0;oto<TIME;oto++){  
	for(i=0;i<MAPSIZE;++i){
		map_display[i]=map_org[i];
		
	} 
	for(begin_point=WIDTH+1;begin_point<WIDTH+2;++begin_point){
		if(map_display[begin_point]!=WALL){
			for(end_point=MAPSIZE-WIDTH-3;end_point<MAPSIZE-WIDTH-2;++end_point){
				if(map_display[end_point]!=WALL&&begin_point!=end_point){
					printf("\ns%d,g%d\n",begin_point,end_point);
					for(count=0;count<MAPSIZE;count++){
						map_org[count]=map_display[count];
						map[0][count]=WALL;
						map[5][count]=WALL;
						mapafter[count]=WALL;
						map[1][count]=0;
						map[1][count]=0;
						map[3][count]=0;
						map[4][count]=0;
						for(i=0;i<MAPSIZE;i++){
							maps[i][count]=0;
						}
					}
					map[0][begin_point]=START;
					map[0][end_point]=GOAL;
					map[2][end_point]=1;
					printf("\n");
					even=1;
					clock_count=1;
					end_times=0;
          open_flag=0;
					start_clock = clock();
					for(count=0;count<MAPSIZE;count++){
						if(map[0][count]==START){
							start=count;
						}else if(map[0][count]==GOAL){
							goal=count;
						}
						sub_plot[count]=0;
						subs[count]=0;
					}
                    mapafter[start]=WALL;
										map[4][start]=1;	
                    printf("\n\ns%d\n",start);
					maps[start][start]=1;
					maps[goal][goal]=1;
					while(1){
						evens=even;
						for(count_value=0;count_value<MAPSIZE/2;count_value++){
							wari=0;
							wari_moto=0;
							if(count_value%EVEN==0){
								if(evens){
									evens=0;
								}else{
										evens++;
								}
							}
							plot_value=count_value*2+evens;    
							if(map_org[plot_value]!=-1&&plot_value!=goal&&plot_value!=start){	
								
								map[1][plot_value]=map[2][plot_value];
								map[2][plot_value]=0;
									//	map[1][plot_value]=(map[1][plot_value+1]|map[1][plot_value-1]|map[1][plot_value-WIDTH]|map[1][plot_value+WIDTH]);
								map[2][plot_value]=(map[2][plot_value+1]|map[2][plot_value-1]|map[2][plot_value-WIDTH]|map[2][plot_value+WIDTH]);
								map[3][plot_value]=map[4][plot_value];
								map[4][plot_value]=	(map[4][plot_value+1]|map[4][plot_value-1]|map[4][plot_value-WIDTH]|map[4][plot_value+WIDTH]);

              if(map[2][plot_value]!=map[1][plot_value]){			
						    	map[0][plot_value]=clock_count;
                                open_flag=1;
									maps[plot_value][plot_value]=1;
								for(j=0;j<MAPSIZE;++j){
									if(map_org[j]!=-1){	
										maps[plot_value][j]|=maps[plot_value+1][j];
										maps[plot_value][j]|=maps[plot_value-1][j];
										maps[plot_value][j]|=maps[plot_value+WIDTH][j];
										maps[plot_value][j]|=maps[plot_value-WIDTH][j];
									}
								}
								for(i=0;i<MAPSIZE;i++){
									if(!maps[plot_value][i]){
//										map[0][i]=WALL;
									}
									printf("%4d",maps[plot_value][i]);
									if(i%WIDTH==WIDTH-1){
										printf("\n");
									}
								}
										printf("\n%d\n",plot_value);
							}
							if(map[3][plot_value]!=map[4][plot_value]){
								map[0][plot_value]=256-clock_count;
								maps[plot_value][plot_value]=1;
								for(j=0;j<MAPSIZE;++j){
									if(map_org[j]!=-1){	
										maps[plot_value][j]|=maps[plot_value+1][j];
										maps[plot_value][j]|=maps[plot_value-1][j];
										maps[plot_value][j]|=maps[plot_value+WIDTH][j];
										maps[plot_value][j]|=maps[plot_value-WIDTH][j];
									}
								}		
								for(i=0;i<MAPSIZE;i++){
									if(!maps[plot_value][i]){
				//						map[0][i]=WALL;
									}
									printf("%4d",maps[plot_value][i]);
									if(i%WIDTH==WIDTH-1){
										printf("\n");
									}
								}
										printf("\n%d\n",plot_value);
							}
							if(map[2][plot_value]&&map[4][plot_value]){
								end_potential=1;
								for(i=0;i<MAPSIZE;i++){
									if(!maps[plot_value][i]){
										map[0][i]=1023;
									}
									printf("%4d",maps[plot_value][i]);
									if(i%WIDTH==WIDTH-1){
										printf("--\n");
									}
								}
										printf("\n%d\n",plot_value);
								break;
							}
						
						}
				}
            for(plot_value=0;plot_value<MAPSIZE;plot_value++){
							printf("%4d, ",map[0][plot_value]);
							if(plot_value%WIDTH==WIDTH-1){
								printf("\n");
							}
						}
						printf("\n");
						if(end_potential){
									end_clock = clock();
                          break;
           }
                        if(open_flag){
                            clock_count++;
                        }
                        open_flag=0;
						if(even){
							even=0;          
						}else{
							even++;	
						}
					}
					chenge_flag_all=0;
					end_times=0;
					printf("\n");
					printf("\n"); 

					nowplot=start;
					nextplot=start;
					count=0;
					calculate_flag=0;
					wall_t=0;
					wall_ts=0;
					while(nowplot!=goal){
						printf("%d ", nowplot);
						result[count]=nowplot;
						if(map[0][nowplot-1]!=-1){
							if(map[0][nextplot]>=map[0][nowplot-1]){
								nextplot=nowplot-1;
							}
						}
						if(map[0][nowplot+1]!=-1){
							if(map[0][nextplot]>=map[0][nowplot+1]){
								nextplot=nowplot+1;
							}
						}
						if(map[0][nowplot+WIDTH]!=-1){
							if(map[0][nextplot]>=map[0][nowplot+WIDTH]){
								nextplot=nowplot+WIDTH;
							}
						}
						if(map[0][nowplot-WIDTH]!=-1){
							if(map[0][nextplot]>=map[0][nowplot-WIDTH]){
								nextplot=nowplot-WIDTH;
							}
						}
						nowplot=nextplot;        
						count++;
					}
					result[count]=goal;
					count=0;
					while(result[count]!=goal){
						printf(" %d ",result[count]);
						count++;
					}
					printf(" %d \n",result[count]);
					exit=clock();
					printf("time:%ld,%ld,\n",end_clock-start_clock,exit);
					printf("%ld\n",CLOCKS_PER_SEC);
					printf("%d\n",map_pass);
					printf("\nclock_count%d\n",clock_count);
/*					for(plot_value=0;plot_value<MAPSIZE;plot_value++){
						if(map_display[plot_value]==-1){
							printf("%4d, ",plot_value);
						}
						if(plot_value%WIDTH==WIDTH-1){
							printf("\n");
						}
					}*/
				}
			}
		}
	}
}
