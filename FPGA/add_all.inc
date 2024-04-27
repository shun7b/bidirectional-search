declare add_all{
    input sig,start[BIT],goal[BIT],dig_w;
    output dig_t0,dig_t1,dig_t2,dig_t3,dig_t4,dig_t5,dig_t6,dig_t7,dig_t8,dig_t9,dig_t10,dig_t11,dig_t12,dig_t13,dig_t14,dig_t15,dig_t16,dig_t17,dig_t18,dig_t19,dig_t20,dig_t21,dig_t22,dig_t23,dig_t24,dig_t25,dig_t26,dig_t27,dig_t28,dig_t29,dig_t30,dig_t31,dig_t32,dig_t33,dig_t34,dig_t35,dig_t36,dig_t37,dig_t38,dig_t39,dig_t40,dig_t41;

    input sg_in17[2],sg_in18[2],sg_in19[2],sg_in20[2],sg_in21[2],sg_in22[2],sg_in23[2],sg_in24[2],sg_in25[2],sg_in26[2],sg_in27[2],sg_in28[2],sg_in29[2],sg_in30[2],
sg_in33[2],sg_in34[2],sg_in35[2],sg_in36[2],sg_in37[2],sg_in38[2],sg_in39[2],sg_in40[2],sg_in41[2],sg_in42[2],sg_in43[2],sg_in44[2],sg_in45[2],sg_in46[2],
sg_in49[2],sg_in50[2],sg_in51[2],sg_in52[2],sg_in53[2],sg_in54[2],sg_in55[2],sg_in56[2],sg_in57[2],sg_in58[2],sg_in59[2],sg_in60[2],sg_in61[2],sg_in62[2],
sg_in65[2],sg_in66[2],sg_in67[2],sg_in68[2],sg_in69[2],sg_in70[2],sg_in71[2],sg_in72[2],sg_in73[2],sg_in74[2],sg_in75[2],sg_in76[2],sg_in77[2],sg_in78[2],
sg_in81[2],sg_in82[2],sg_in83[2],sg_in84[2],sg_in85[2],sg_in86[2],sg_in87[2],sg_in88[2],sg_in89[2],sg_in90[2],sg_in91[2],sg_in92[2],sg_in93[2],sg_in94[2],
sg_in97[2],sg_in98[2],sg_in99[2],sg_in100[2],sg_in101[2],sg_in102[2],sg_in103[2],sg_in104[2],sg_in105[2],sg_in106[2],sg_in107[2],sg_in108[2],sg_in109[2],sg_in110[2];
input wall_end_in[MAP_SIZE];		
output wall_end[MAP_SIZE];
input all_sg_in17[MAP_SIZE],all_sg_in18[MAP_SIZE],all_sg_in19[MAP_SIZE],all_sg_in20[MAP_SIZE],all_sg_in21[MAP_SIZE],all_sg_in22[MAP_SIZE],all_sg_in23[MAP_SIZE],all_sg_in24[MAP_SIZE],all_sg_in25[MAP_SIZE],all_sg_in26[MAP_SIZE],all_sg_in27[MAP_SIZE],all_sg_in28[MAP_SIZE],all_sg_in29[MAP_SIZE],all_sg_in30[MAP_SIZE],
all_sg_in33[MAP_SIZE],all_sg_in34[MAP_SIZE],all_sg_in35[MAP_SIZE],all_sg_in36[MAP_SIZE],all_sg_in37[MAP_SIZE],all_sg_in38[MAP_SIZE],all_sg_in39[MAP_SIZE],all_sg_in40[MAP_SIZE],all_sg_in41[MAP_SIZE],all_sg_in42[MAP_SIZE],all_sg_in43[MAP_SIZE],all_sg_in44[MAP_SIZE],all_sg_in45[MAP_SIZE],all_sg_in46[MAP_SIZE],
all_sg_in49[MAP_SIZE],all_sg_in50[MAP_SIZE],all_sg_in51[MAP_SIZE],all_sg_in52[MAP_SIZE],all_sg_in53[MAP_SIZE],all_sg_in54[MAP_SIZE],all_sg_in55[MAP_SIZE],all_sg_in56[MAP_SIZE],all_sg_in57[MAP_SIZE],all_sg_in58[MAP_SIZE],all_sg_in59[MAP_SIZE],all_sg_in60[MAP_SIZE],all_sg_in61[MAP_SIZE],all_sg_in62[MAP_SIZE],
all_sg_in65[MAP_SIZE],all_sg_in66[MAP_SIZE],all_sg_in67[MAP_SIZE],all_sg_in68[MAP_SIZE],all_sg_in69[MAP_SIZE],all_sg_in70[MAP_SIZE],all_sg_in71[MAP_SIZE],all_sg_in72[MAP_SIZE],all_sg_in73[MAP_SIZE],all_sg_in74[MAP_SIZE],all_sg_in75[MAP_SIZE],all_sg_in76[MAP_SIZE],all_sg_in77[MAP_SIZE],all_sg_in78[MAP_SIZE],
all_sg_in81[MAP_SIZE],all_sg_in82[MAP_SIZE],all_sg_in83[MAP_SIZE],all_sg_in84[MAP_SIZE],all_sg_in85[MAP_SIZE],all_sg_in86[MAP_SIZE],all_sg_in87[MAP_SIZE],all_sg_in88[MAP_SIZE],all_sg_in89[MAP_SIZE],all_sg_in90[MAP_SIZE],all_sg_in91[MAP_SIZE],all_sg_in92[MAP_SIZE],all_sg_in93[MAP_SIZE],all_sg_in94[MAP_SIZE],
all_sg_in97[MAP_SIZE],all_sg_in98[MAP_SIZE],all_sg_in99[MAP_SIZE],all_sg_in100[MAP_SIZE],all_sg_in101[MAP_SIZE],all_sg_in102[MAP_SIZE],all_sg_in103[MAP_SIZE],all_sg_in104[MAP_SIZE],all_sg_in105[MAP_SIZE],all_sg_in106[MAP_SIZE],all_sg_in107[MAP_SIZE],all_sg_in108[MAP_SIZE],all_sg_in109[MAP_SIZE],all_sg_in110[MAP_SIZE];
    input data_in17[BIT],data_in18[BIT],data_in19[BIT],data_in20[BIT],data_in21[BIT],data_in22[BIT],data_in23[BIT],data_in24[BIT],data_in25[BIT],data_in26[BIT],data_in27[BIT],data_in28[BIT],data_in29[BIT],data_in30[BIT],
            data_in33[BIT],data_in34[BIT],data_in35[BIT],data_in36[BIT],data_in37[BIT],data_in38[BIT],data_in39[BIT],data_in40[BIT],data_in41[BIT],data_in42[BIT],data_in43[BIT],data_in44[BIT],data_in45[BIT],data_in46[BIT],
            data_in49[BIT],data_in50[BIT],data_in51[BIT],data_in52[BIT],data_in53[BIT],data_in54[BIT],data_in55[BIT],data_in56[BIT],data_in57[BIT],data_in58[BIT],data_in59[BIT],data_in60[BIT],data_in61[BIT],data_in62[BIT],
            data_in65[BIT],data_in66[BIT],data_in67[BIT],data_in68[BIT],data_in69[BIT],data_in70[BIT],data_in71[BIT],data_in72[BIT],data_in73[BIT],data_in74[BIT],data_in75[BIT],data_in76[BIT],data_in77[BIT],data_in78[BIT],
            data_in81[BIT],data_in82[BIT],data_in83[BIT],data_in84[BIT],data_in85[BIT],data_in86[BIT],data_in87[BIT],data_in88[BIT],data_in89[BIT],data_in90[BIT],data_in91[BIT],data_in92[BIT],data_in93[BIT],data_in94[BIT],
            data_in97[BIT],data_in98[BIT],data_in99[BIT],data_in100[BIT],data_in101[BIT],data_in102[BIT],data_in103[BIT],data_in104[BIT],data_in105[BIT],data_in106[BIT],data_in107[BIT],data_in108[BIT],data_in109[BIT],data_in110[BIT];
	input	data_in_org17[BIT],data_in_org18[BIT],data_in_org19[BIT],data_in_org20[BIT],data_in_org21[BIT],data_in_org22[BIT],data_in_org23[BIT],data_in_org24[BIT],data_in_org25[BIT],data_in_org26[BIT],data_in_org27[BIT],data_in_org28[BIT],data_in_org29[BIT],data_in_org30[BIT],
data_in_org33[BIT],data_in_org34[BIT],data_in_org35[BIT],data_in_org36[BIT],data_in_org37[BIT],data_in_org38[BIT],data_in_org39[BIT],data_in_org40[BIT],data_in_org41[BIT],data_in_org42[BIT],data_in_org43[BIT],data_in_org44[BIT],data_in_org45[BIT],data_in_org46[BIT],
data_in_org49[BIT],data_in_org50[BIT],data_in_org51[BIT],data_in_org52[BIT],data_in_org53[BIT],data_in_org54[BIT],data_in_org55[BIT],data_in_org56[BIT],data_in_org57[BIT],data_in_org58[BIT],data_in_org59[BIT],data_in_org60[BIT],data_in_org61[BIT],data_in_org62[BIT],
data_in_org65[BIT],data_in_org66[BIT],data_in_org67[BIT],data_in_org68[BIT],data_in_org69[BIT],data_in_org70[BIT],data_in_org71[BIT],data_in_org72[BIT],data_in_org73[BIT],data_in_org74[BIT],data_in_org75[BIT],data_in_org76[BIT],data_in_org77[BIT],data_in_org78[BIT],
data_in_org81[BIT],data_in_org82[BIT],data_in_org83[BIT],data_in_org84[BIT],data_in_org85[BIT],data_in_org86[BIT],data_in_org87[BIT],data_in_org88[BIT],data_in_org89[BIT],data_in_org90[BIT],data_in_org91[BIT],data_in_org92[BIT],data_in_org93[BIT],data_in_org94[BIT],
data_in_org97[BIT],data_in_org98[BIT],data_in_org99[BIT],data_in_org100[BIT],data_in_org101[BIT],data_in_org102[BIT],data_in_org103[BIT],data_in_org104[BIT],data_in_org105[BIT],data_in_org106[BIT],data_in_org107[BIT],data_in_org108[BIT],data_in_org109[BIT],data_in_org110[BIT];
 	output data_out_org17[BIT],data_out_org18[BIT],data_out_org19[BIT],data_out_org20[BIT],data_out_org21[BIT],data_out_org22[BIT],data_out_org23[BIT],data_out_org24[BIT],data_out_org25[BIT],data_out_org26[BIT],data_out_org27[BIT],data_out_org28[BIT],data_out_org29[BIT],data_out_org30[BIT],
data_out_org33[BIT],data_out_org34[BIT],data_out_org35[BIT],data_out_org36[BIT],data_out_org37[BIT],data_out_org38[BIT],data_out_org39[BIT],data_out_org40[BIT],data_out_org41[BIT],data_out_org42[BIT],data_out_org43[BIT],data_out_org44[BIT],data_out_org45[BIT],data_out_org46[BIT],
data_out_org49[BIT],data_out_org50[BIT],data_out_org51[BIT],data_out_org52[BIT],data_out_org53[BIT],data_out_org54[BIT],data_out_org55[BIT],data_out_org56[BIT],data_out_org57[BIT],data_out_org58[BIT],data_out_org59[BIT],data_out_org60[BIT],data_out_org61[BIT],data_out_org62[BIT],
data_out_org65[BIT],data_out_org66[BIT],data_out_org67[BIT],data_out_org68[BIT],data_out_org69[BIT],data_out_org70[BIT],data_out_org71[BIT],data_out_org72[BIT],data_out_org73[BIT],data_out_org74[BIT],data_out_org75[BIT],data_out_org76[BIT],data_out_org77[BIT],data_out_org78[BIT],
data_out_org81[BIT],data_out_org82[BIT],data_out_org83[BIT],data_out_org84[BIT],data_out_org85[BIT],data_out_org86[BIT],data_out_org87[BIT],data_out_org88[BIT],data_out_org89[BIT],data_out_org90[BIT],data_out_org91[BIT],data_out_org92[BIT],data_out_org93[BIT],data_out_org94[BIT],
data_out_org97[BIT],data_out_org98[BIT],data_out_org99[BIT],data_out_org100[BIT],data_out_org101[BIT],data_out_org102[BIT],data_out_org103[BIT],data_out_org104[BIT],data_out_org105[BIT],data_out_org106[BIT],data_out_org107[BIT],data_out_org108[BIT],data_out_org109[BIT],data_out_org110[BIT];
    output sg_out17[2],sg_out18[2],sg_out19[2],sg_out20[2],sg_out21[2],sg_out22[2],sg_out23[2],sg_out24[2],sg_out25[2],sg_out26[2],sg_out27[2],sg_out28[2],sg_out29[2],sg_out30[2],
sg_out33[2],sg_out34[2],sg_out35[2],sg_out36[2],sg_out37[2],sg_out38[2],sg_out39[2],sg_out40[2],sg_out41[2],sg_out42[2],sg_out43[2],sg_out44[2],sg_out45[2],sg_out46[2]
,sg_out49[2],sg_out50[2],sg_out51[2],sg_out52[2],sg_out53[2],sg_out54[2],sg_out55[2],sg_out56[2],sg_out57[2],sg_out58[2],sg_out59[2],sg_out60[2],sg_out61[2],sg_out62[2]
,sg_out65[2],sg_out66[2],sg_out67[2],sg_out68[2],sg_out69[2],sg_out70[2],sg_out71[2],sg_out72[2],sg_out73[2],sg_out74[2],sg_out75[2],sg_out76[2],sg_out77[2],sg_out78[2],
sg_out81[2],sg_out82[2],sg_out83[2],sg_out84[2],sg_out85[2],sg_out86[2],sg_out87[2],sg_out88[2],sg_out89[2],sg_out90[2],sg_out91[2],sg_out92[2],sg_out93[2],sg_out94[2],
sg_out97[2],sg_out98[2],sg_out99[2],sg_out100[2],sg_out101[2],sg_out102[2],sg_out103[2],sg_out104[2],sg_out105[2],sg_out106[2],sg_out107[2],sg_out108[2],sg_out109[2],sg_out110[2];
    output data_out17[BIT],data_out18[BIT],data_out19[BIT],data_out20[BIT],data_out21[BIT],data_out22[BIT],data_out23[BIT],data_out24[BIT],data_out25[BIT],data_out26[BIT],data_out27[BIT],data_out28[BIT],data_out29[BIT],data_out30[BIT],
data_out33[BIT],data_out34[BIT],data_out35[BIT],data_out36[BIT],data_out37[BIT],data_out38[BIT],data_out39[BIT],data_out40[BIT],data_out41[BIT],data_out42[BIT],data_out43[BIT],data_out44[BIT],data_out45[BIT],data_out46[BIT],
data_out49[BIT],data_out50[BIT],data_out51[BIT],data_out52[BIT],data_out53[BIT],data_out54[BIT],data_out55[BIT],data_out56[BIT],data_out57[BIT],data_out58[BIT],data_out59[BIT],data_out60[BIT],data_out61[BIT],data_out62[BIT],
data_out65[BIT],data_out66[BIT],data_out67[BIT],data_out68[BIT],data_out69[BIT],data_out70[BIT],data_out71[BIT],data_out72[BIT],data_out73[BIT],data_out74[BIT],data_out75[BIT],data_out76[BIT],data_out77[BIT],data_out78[BIT],
data_out81[BIT],data_out82[BIT],data_out83[BIT],data_out84[BIT],data_out85[BIT],data_out86[BIT],data_out87[BIT],data_out88[BIT],data_out89[BIT],data_out90[BIT],data_out91[BIT],data_out92[BIT],data_out93[BIT],data_out94[BIT],
data_out97[BIT],data_out98[BIT],data_out99[BIT],data_out100[BIT],data_out101[BIT],data_out102[BIT],data_out103[BIT],data_out104[BIT],data_out105[BIT],data_out106[BIT],data_out107[BIT],data_out108[BIT],data_out109[BIT],data_out110[BIT];
    output data_out_index17[BIT],data_out_index18[BIT],data_out_index19[BIT],data_out_index20[BIT],data_out_index21[BIT],data_out_index22[BIT],data_out_index23[BIT],data_out_index24[BIT],data_out_index25[BIT],data_out_index26[BIT],data_out_index27[BIT],data_out_index28[BIT],data_out_index29[BIT],data_out_index30[BIT],
data_out_index33[BIT],data_out_index34[BIT],data_out_index35[BIT],data_out_index36[BIT],data_out_index37[BIT],data_out_index38[BIT],data_out_index39[BIT],data_out_index40[BIT],data_out_index41[BIT],data_out_index42[BIT],data_out_index43[BIT],data_out_index44[BIT],data_out_index45[BIT],data_out_index46[BIT],
data_out_index49[BIT],data_out_index50[BIT],data_out_index51[BIT],data_out_index52[BIT],data_out_index53[BIT],data_out_index54[BIT],data_out_index55[BIT],data_out_index56[BIT],data_out_index57[BIT],data_out_index58[BIT],data_out_index59[BIT],data_out_index60[BIT],data_out_index61[BIT],data_out_index62[BIT],
data_out_index65[BIT],data_out_index66[BIT],data_out_index67[BIT],data_out_index68[BIT],data_out_index69[BIT],data_out_index70[BIT],data_out_index71[BIT],data_out_index72[BIT],data_out_index73[BIT],data_out_index74[BIT],data_out_index75[BIT],data_out_index76[BIT],data_out_index77[BIT],data_out_index78[BIT],
data_out_index81[BIT],data_out_index82[BIT],data_out_index83[BIT],data_out_index84[BIT],data_out_index85[BIT],data_out_index86[BIT],data_out_index87[BIT],data_out_index88[BIT],data_out_index89[BIT],data_out_index90[BIT],data_out_index91[BIT],data_out_index92[BIT],data_out_index93[BIT],data_out_index94[BIT],
data_out_index97[BIT],data_out_index98[BIT],data_out_index99[BIT],data_out_index100[BIT],data_out_index101[BIT],data_out_index102[BIT],data_out_index103[BIT],data_out_index104[BIT],data_out_index105[BIT],data_out_index106[BIT],data_out_index107[BIT],data_out_index108[BIT],data_out_index109[BIT],data_out_index110[BIT];
input distance_count_all[BIT];
output all_sg_out17[MAP_SIZE],all_sg_out18[MAP_SIZE],all_sg_out19[MAP_SIZE],all_sg_out20[MAP_SIZE],all_sg_out21[MAP_SIZE],all_sg_out22[MAP_SIZE],all_sg_out23[MAP_SIZE],all_sg_out24[MAP_SIZE],all_sg_out25[MAP_SIZE],all_sg_out26[MAP_SIZE],all_sg_out27[MAP_SIZE],all_sg_out28[MAP_SIZE],all_sg_out29[MAP_SIZE],all_sg_out30[MAP_SIZE],
all_sg_out33[MAP_SIZE],all_sg_out34[MAP_SIZE],all_sg_out35[MAP_SIZE],all_sg_out36[MAP_SIZE],all_sg_out37[MAP_SIZE],all_sg_out38[MAP_SIZE],all_sg_out39[MAP_SIZE],all_sg_out40[MAP_SIZE],all_sg_out41[MAP_SIZE],all_sg_out42[MAP_SIZE],all_sg_out43[MAP_SIZE],all_sg_out44[MAP_SIZE],all_sg_out45[MAP_SIZE],all_sg_out46[MAP_SIZE],
all_sg_out49[MAP_SIZE],all_sg_out50[MAP_SIZE],all_sg_out51[MAP_SIZE],all_sg_out52[MAP_SIZE],all_sg_out53[MAP_SIZE],all_sg_out54[MAP_SIZE],all_sg_out55[MAP_SIZE],all_sg_out56[MAP_SIZE],all_sg_out57[MAP_SIZE],all_sg_out58[MAP_SIZE],all_sg_out59[MAP_SIZE],all_sg_out60[MAP_SIZE],all_sg_out61[MAP_SIZE],all_sg_out62[MAP_SIZE],
all_sg_out65[MAP_SIZE],all_sg_out66[MAP_SIZE],all_sg_out67[MAP_SIZE],all_sg_out68[MAP_SIZE],all_sg_out69[MAP_SIZE],all_sg_out70[MAP_SIZE],all_sg_out71[MAP_SIZE],all_sg_out72[MAP_SIZE],all_sg_out73[MAP_SIZE],all_sg_out74[MAP_SIZE],all_sg_out75[MAP_SIZE],all_sg_out76[MAP_SIZE],all_sg_out77[MAP_SIZE],all_sg_out78[MAP_SIZE],
all_sg_out81[MAP_SIZE],all_sg_out82[MAP_SIZE],all_sg_out83[MAP_SIZE],all_sg_out84[MAP_SIZE],all_sg_out85[MAP_SIZE],all_sg_out86[MAP_SIZE],all_sg_out87[MAP_SIZE],all_sg_out88[MAP_SIZE],all_sg_out89[MAP_SIZE],all_sg_out90[MAP_SIZE],all_sg_out91[MAP_SIZE],all_sg_out92[MAP_SIZE],all_sg_out93[MAP_SIZE],all_sg_out94[MAP_SIZE],
all_sg_out97[MAP_SIZE],all_sg_out98[MAP_SIZE],all_sg_out99[MAP_SIZE],all_sg_out100[MAP_SIZE],all_sg_out101[MAP_SIZE],all_sg_out102[MAP_SIZE],all_sg_out103[MAP_SIZE],all_sg_out104[MAP_SIZE],all_sg_out105[MAP_SIZE],all_sg_out106[MAP_SIZE],all_sg_out107[MAP_SIZE],all_sg_out108[MAP_SIZE],all_sg_out109[MAP_SIZE],all_sg_out110[MAP_SIZE];
func_in in_do(data_in17,data_in18,data_in19,data_in20,data_in21,data_in22,data_in23,data_in24,data_in25,data_in26,data_in27,data_in28,data_in29,data_in30,
data_in33,data_in34,data_in35,data_in36,data_in37,data_in38,data_in39,data_in40,data_in41,data_in42,data_in43,data_in44,data_in45,data_in46,
data_in49,data_in50,data_in51,data_in52,data_in53,data_in54,data_in55,data_in56,data_in57,data_in58,data_in59,data_in60,data_in61,data_in62,
data_in65,data_in66,data_in67,data_in68,data_in69,data_in70,data_in71,data_in72,data_in73,data_in74,data_in75,data_in76,data_in77,data_in78,
data_in81,data_in82,data_in83,data_in84,data_in85,data_in86,data_in87,data_in88,data_in89,data_in90,data_in91,data_in92,data_in93,data_in94,
data_in97,data_in98,data_in99,data_in100,data_in101,data_in102,data_in103,data_in104,data_in105,data_in106,data_in107,data_in108,data_in109,data_in110,
data_in_org17,data_in_org18,data_in_org19,data_in_org20,data_in_org21,data_in_org22,data_in_org23,data_in_org24,data_in_org25,data_in_org26,data_in_org27,data_in_org28,data_in_org29,data_in_org30,
data_in_org33,data_in_org34,data_in_org35,data_in_org36,data_in_org37,data_in_org38,data_in_org39,data_in_org40,data_in_org41,data_in_org42,data_in_org43,data_in_org44,data_in_org45,data_in_org46,
data_in_org49,data_in_org50,data_in_org51,data_in_org52,data_in_org53,data_in_org54,data_in_org55,data_in_org56,data_in_org57,data_in_org58,data_in_org59,data_in_org60,data_in_org61,data_in_org62,
data_in_org65,data_in_org66,data_in_org67,data_in_org68,data_in_org69,data_in_org70,data_in_org71,data_in_org72,data_in_org73,data_in_org74,data_in_org75,data_in_org76,data_in_org77,data_in_org78,
data_in_org81,data_in_org82,data_in_org83,data_in_org84,data_in_org85,data_in_org86,data_in_org87,data_in_org88,data_in_org89,data_in_org90,data_in_org91,data_in_org92,data_in_org93,data_in_org94,
data_in_org97,data_in_org98,data_in_org99,data_in_org100,data_in_org101,data_in_org102,data_in_org103,data_in_org104,data_in_org105,data_in_org106,data_in_org107,data_in_org108,data_in_org109,data_in_org110,
sg_in17,sg_in18,sg_in19,sg_in20,sg_in21,sg_in22,sg_in23,sg_in24,sg_in25,sg_in26,sg_in27,sg_in28,sg_in29,sg_in30,
sg_in33,sg_in34,sg_in35,sg_in36,sg_in37,sg_in38,sg_in39,sg_in40,sg_in41,sg_in42,sg_in43,sg_in44,sg_in45,sg_in46,
sg_in49,sg_in50,sg_in51,sg_in52,sg_in53,sg_in54,sg_in55,sg_in56,sg_in57,sg_in58,sg_in59,sg_in60,sg_in61,sg_in62,
sg_in65,sg_in66,sg_in67,sg_in68,sg_in69,sg_in70,sg_in71,sg_in72,sg_in73,sg_in74,sg_in75,sg_in76,sg_in77,sg_in78,
sg_in81,sg_in82,sg_in83,sg_in84,sg_in85,sg_in86,sg_in87,sg_in88,sg_in89,sg_in90,sg_in91,sg_in92,sg_in93,sg_in94,
sg_in97,sg_in98,sg_in99,sg_in100,sg_in101,sg_in102,sg_in103,sg_in104,sg_in105,sg_in106,sg_in107,sg_in108,sg_in109,sg_in110,

all_sg_in17,all_sg_in18,all_sg_in19,all_sg_in20,all_sg_in21,all_sg_in22,all_sg_in23,all_sg_in24,all_sg_in25,all_sg_in26,all_sg_in27,all_sg_in28,all_sg_in29,all_sg_in30,
all_sg_in33,all_sg_in34,all_sg_in35,all_sg_in36,all_sg_in37,all_sg_in38,all_sg_in39,all_sg_in40,all_sg_in41,all_sg_in42,all_sg_in43,all_sg_in44,all_sg_in45,all_sg_in46,
all_sg_in49,all_sg_in50,all_sg_in51,all_sg_in52,all_sg_in53,all_sg_in54,all_sg_in55,all_sg_in56,all_sg_in57,all_sg_in58,all_sg_in59,all_sg_in60,all_sg_in61,all_sg_in62,
all_sg_in65,all_sg_in66,all_sg_in67,all_sg_in68,all_sg_in69,all_sg_in70,all_sg_in71,all_sg_in72,all_sg_in73,all_sg_in74,all_sg_in75,all_sg_in76,all_sg_in77,all_sg_in78,
all_sg_in81,all_sg_in82,all_sg_in83,all_sg_in84,all_sg_in85,all_sg_in86,all_sg_in87,all_sg_in88,all_sg_in89,all_sg_in90,all_sg_in91,all_sg_in92,all_sg_in93,all_sg_in94,
all_sg_in97,all_sg_in98,all_sg_in99,all_sg_in100,all_sg_in101,all_sg_in102,all_sg_in103,all_sg_in104,all_sg_in105,all_sg_in106,all_sg_in107,all_sg_in108,all_sg_in109,all_sg_in110,
    sig,start,goal,dig_w,distance_count_all,wall_end_in);
    func_out out_do();
    func_out out_data(data_out17,data_out18,data_out19,data_out20,data_out21,data_out22,data_out23,data_out24,data_out25,data_out26,data_out27,data_out28,data_out29,data_out30,
data_out33,data_out34,data_out35,data_out36,data_out37,data_out38,data_out39,data_out40,data_out41,data_out42,data_out43,data_out44,data_out45,data_out46,
data_out49,data_out50,data_out51,data_out52,data_out53,data_out54,data_out55,data_out56,data_out57,data_out58,data_out59,data_out60,data_out61,data_out62,
data_out65,data_out66,data_out67,data_out68,data_out69,data_out70,data_out71,data_out72,data_out73,data_out74,data_out75,data_out76,data_out77,data_out78,
data_out81,data_out82,data_out83,data_out84,data_out85,data_out86,data_out87,data_out88,data_out89,data_out90,data_out91,data_out92,data_out93,data_out94,
data_out97,data_out98,data_out99,data_out100,data_out101,data_out102,data_out103,data_out104,data_out105,data_out106,data_out107,data_out108,data_out109,data_out110,
        
data_out_index17,data_out_index18,data_out_index19,data_out_index20,data_out_index21,data_out_index22,data_out_index23,data_out_index24,data_out_index25,data_out_index26,data_out_index27,data_out_index28,data_out_index29,data_out_index30,
data_out_index33,data_out_index34,data_out_index35,data_out_index36,data_out_index37,data_out_index38,data_out_index39,data_out_index40,data_out_index41,data_out_index42,data_out_index43,data_out_index44,data_out_index45,data_out_index46,
data_out_index49,data_out_index50,data_out_index51,data_out_index52,data_out_index53,data_out_index54,data_out_index55,data_out_index56,data_out_index57,data_out_index58,data_out_index59,data_out_index60,data_out_index61,data_out_index62,
data_out_index65,data_out_index66,data_out_index67,data_out_index68,data_out_index69,data_out_index70,data_out_index71,data_out_index72,data_out_index73,data_out_index74,data_out_index75,data_out_index76,data_out_index77,data_out_index78,
data_out_index81,data_out_index82,data_out_index83,data_out_index84,data_out_index85,data_out_index86,data_out_index87,data_out_index88,data_out_index89,data_out_index90,data_out_index91,data_out_index92,data_out_index93,data_out_index94,
data_out_index97,data_out_index98,data_out_index99,data_out_index100,data_out_index101,data_out_index102,data_out_index103,data_out_index104,data_out_index105,data_out_index106,data_out_index107,data_out_index108,data_out_index109,data_out_index110,
    
data_out_org17,data_out_org18,data_out_org19,data_out_org20,data_out_org21,data_out_org22,data_out_org23,data_out_org24,data_out_org25,data_out_org26,data_out_org27,data_out_org28,data_out_org29,data_out_org30,
data_out_org33,data_out_org34,data_out_org35,data_out_org36,data_out_org37,data_out_org38,data_out_org39,data_out_org40,data_out_org41,data_out_org42,data_out_org43,data_out_org44,data_out_org45,data_out_org46,
data_out_org49,data_out_org50,data_out_org51,data_out_org52,data_out_org53,data_out_org54,data_out_org55,data_out_org56,data_out_org57,data_out_org58,data_out_org59,data_out_org60,data_out_org61,data_out_org62,
data_out_org65,data_out_org66,data_out_org67,data_out_org68,data_out_org69,data_out_org70,data_out_org71,data_out_org72,data_out_org73,data_out_org74,data_out_org75,data_out_org76,data_out_org77,data_out_org78,
data_out_org81,data_out_org82,data_out_org83,data_out_org84,data_out_org85,data_out_org86,data_out_org87,data_out_org88,data_out_org89,data_out_org90,data_out_org91,data_out_org92,data_out_org93,data_out_org94,
data_out_org97,data_out_org98,data_out_org99,data_out_org100,data_out_org101,data_out_org102,data_out_org103,data_out_org104,data_out_org105,data_out_org106,data_out_org107,data_out_org108,data_out_org109,data_out_org110,
sg_out17,sg_out18,sg_out19,sg_out20,sg_out21,sg_out22,sg_out23,sg_out24,sg_out25,sg_out26,sg_out27,sg_out28,sg_out29,sg_out30,
sg_out33,sg_out34,sg_out35,sg_out36,sg_out37,sg_out38,sg_out39,sg_out40,sg_out41,sg_out42,sg_out43,sg_out44,sg_out45,sg_out46,
sg_out49,sg_out50,sg_out51,sg_out52,sg_out53,sg_out54,sg_out55,sg_out56,sg_out57,sg_out58,sg_out59,sg_out60,sg_out61,sg_out62,
sg_out65,sg_out66,sg_out67,sg_out68,sg_out69,sg_out70,sg_out71,sg_out72,sg_out73,sg_out74,sg_out75,sg_out76,sg_out77,sg_out78,
sg_out81,sg_out82,sg_out83,sg_out84,sg_out85,sg_out86,sg_out87,sg_out88,sg_out89,sg_out90,sg_out91,sg_out92,sg_out93,sg_out94,
sg_out97,sg_out98,sg_out99,sg_out100,sg_out101,sg_out102,sg_out103,sg_out104,sg_out105,sg_out106,sg_out107,sg_out108,sg_out109,sg_out110,
all_sg_out17,all_sg_out18,all_sg_out19,all_sg_out20,all_sg_out21,all_sg_out22,all_sg_out23,all_sg_out24,all_sg_out25,all_sg_out26,all_sg_out27,all_sg_out28,all_sg_out29,all_sg_out30,
all_sg_out33,all_sg_out34,all_sg_out35,all_sg_out36,all_sg_out37,all_sg_out38,all_sg_out39,all_sg_out40,all_sg_out41,all_sg_out42,all_sg_out43,all_sg_out44,all_sg_out45,all_sg_out46,
all_sg_out49,all_sg_out50,all_sg_out51,all_sg_out52,all_sg_out53,all_sg_out54,all_sg_out55,all_sg_out56,all_sg_out57,all_sg_out58,all_sg_out59,all_sg_out60,all_sg_out61,all_sg_out62,
all_sg_out65,all_sg_out66,all_sg_out67,all_sg_out68,all_sg_out69,all_sg_out70,all_sg_out71,all_sg_out72,all_sg_out73,all_sg_out74,all_sg_out75,all_sg_out76,all_sg_out77,all_sg_out78,
all_sg_out81,all_sg_out82,all_sg_out83,all_sg_out84,all_sg_out85,all_sg_out86,all_sg_out87,all_sg_out88,all_sg_out89,all_sg_out90,all_sg_out91,all_sg_out92,all_sg_out93,all_sg_out94,
all_sg_out97,all_sg_out98,all_sg_out99,all_sg_out100,all_sg_out101,all_sg_out102,all_sg_out103,all_sg_out104,all_sg_out105,all_sg_out106,all_sg_out107,all_sg_out108,all_sg_out109,all_sg_out110,
    dig_t0,dig_t1,dig_t2,dig_t3,dig_t4,dig_t5,dig_t6,dig_t7,dig_t8,dig_t9,dig_t10,dig_t11,dig_t12,dig_t13,dig_t14,dig_t15,dig_t16,dig_t17,dig_t18,dig_t19,dig_t20,dig_t21,dig_t22,dig_t23,dig_t24,dig_t25,dig_t26,dig_t27,dig_t28,dig_t29,dig_t30,dig_t31,dig_t32,dig_t33,dig_t34,dig_t35,dig_t36,dig_t37,dig_t38,dig_t39,dig_t40,dig_t41
,wall_end
    );
 
}
