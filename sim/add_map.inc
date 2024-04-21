declare add_map{
    input wall_end_in[MAP_SIZE], all_sg_up[MAP_SIZE],all_sg_down[MAP_SIZE],all_sg_right[MAP_SIZE],all_sg_left[MAP_SIZE],moto_org_near[BIT], moto_org_near1[BIT], moto_org_near2[BIT],moto_org_near3[BIT],moto_org[BIT],sg_up[2],sg_down[2],sg_left[2],sg_right[2],wall_t_in,moto[BIT],up[BIT],right[BIT],down[BIT],left[BIT],start[BIT],goal[BIT],now[BIT],distance[BIT];
    output end_wall[MAP_SIZE],all_s_g[MAP_SIZE],all_s_g_near[MAP_SIZE],data_out[BIT],data_out_index[BIT],data_near[BIT],wall_t_out,data_org[BIT],data_org_near[BIT],s_g[2],s_g_near[2];
    func_in add_exe(wall_end_in,distance,all_sg_up,all_sg_down,all_sg_right,all_sg_left,moto_org_near,moto_org_near1,moto_org_near2,moto_org_near3,moto_org,sg_up,sg_down,sg_right,sg_left,wall_t_in,moto,up,right,down,left,start,goal,now);
}
