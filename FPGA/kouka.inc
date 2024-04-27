declare kouka{
    input data_in17[BIT],data_in18[BIT],data_in19[BIT],data_in20[BIT],data_in21[BIT],data_in22[BIT],data_in23[BIT],data_in24[BIT],data_in25[BIT],data_in26[BIT],data_in27[BIT],data_in28[BIT],data_in29[BIT],data_in30[BIT],
            data_in33[BIT],data_in34[BIT],data_in35[BIT],data_in36[BIT],data_in37[BIT],data_in38[BIT],data_in39[BIT],data_in40[BIT],data_in41[BIT],data_in42[BIT],data_in43[BIT],data_in44[BIT],data_in45[BIT],data_in46[BIT],
            data_in49[BIT],data_in50[BIT],data_in51[BIT],data_in52[BIT],data_in53[BIT],data_in54[BIT],data_in55[BIT],data_in56[BIT],data_in57[BIT],data_in58[BIT],data_in59[BIT],data_in60[BIT],data_in61[BIT],data_in62[BIT],
            data_in65[BIT],data_in66[BIT],data_in67[BIT],data_in68[BIT],data_in69[BIT],data_in70[BIT],data_in71[BIT],data_in72[BIT],data_in73[BIT],data_in74[BIT],data_in75[BIT],data_in76[BIT],data_in77[BIT],data_in78[BIT],
            data_in81[BIT],data_in82[BIT],data_in83[BIT],data_in84[BIT],data_in85[BIT],data_in86[BIT],data_in87[BIT],data_in88[BIT],data_in89[BIT],data_in90[BIT],data_in91[BIT],data_in92[BIT],data_in93[BIT],data_in94[BIT],
            data_in97[BIT],data_in98[BIT],data_in99[BIT],data_in100[BIT],data_in101[BIT],data_in102[BIT],data_in103[BIT],data_in104[BIT],data_in105[BIT],data_in106[BIT],data_in107[BIT],data_in108[BIT],data_in109[BIT],data_in110[BIT],
start[BIT],goal[BIT];
    output loot_out0[BIT],loot_out1[BIT],loot_out2[BIT],loot_out3[BIT],loot_out4[BIT],loot_out5[BIT],loot_out6[BIT],loot_out7[BIT],loot_out8[BIT],loot_out9[BIT],
            loot_out10[BIT],loot_out11[BIT],loot_out12[BIT],loot_out13[BIT],loot_out14[BIT],loot_out15[BIT],loot_out16[BIT],loot_out17[BIT],loot_out18[BIT],loot_out19[BIT],
            loot_out20[BIT],loot_out21[BIT],loot_out22[BIT],loot_out23[BIT],loot_out24[BIT],loot_out25[BIT],loot_out26[BIT],loot_out27[BIT],loot_out28[BIT],loot_out29[BIT],
            loot_out30[BIT],loot_out31[BIT],loot_out32[BIT],loot_out33[BIT],loot_out34[BIT],loot_out35[BIT],loot_out36[BIT],loot_out37[BIT],loot_out38[BIT],loot_out39[BIT],
            loot_out40[BIT],loot_out41[BIT],loot_out42[BIT],loot_out43[BIT],loot_out44[BIT],loot_out45[BIT],loot_out46[BIT],loot_out47[BIT],loot_out48[BIT],loot_out49[BIT],
            loot_out50[BIT],loot_out51[BIT],loot_out52[BIT],loot_out53[BIT],loot_out54[BIT],loot_out55[BIT],loot_out56[BIT],loot_out57[BIT],loot_out58[BIT],loot_out59[BIT],
            loot_out60[BIT],loot_out61[BIT],loot_out62[BIT],loot_out63[BIT],loot_out64[BIT],loot_out65[BIT],loot_out66[BIT],loot_out67[BIT],loot_out68[BIT],loot_out69[BIT],
            loot_out70[BIT],loot_out71[BIT],loot_out72[BIT],loot_out73[BIT],loot_out74[BIT],loot_out75[BIT],loot_out76[BIT],loot_out77[BIT],loot_out78[BIT],loot_out79[BIT],
            loot_out80[BIT],loot_out81[BIT],loot_out82[BIT],loot_out83[BIT],loot_out84[BIT],loot_out85[BIT],loot_out86[BIT],loot_out87[BIT],loot_out88[BIT],loot_out89[BIT],
            loot_out90[BIT],loot_out91[BIT],loot_out92[BIT],loot_out93[BIT],loot_out94[BIT],loot_out95[BIT],loot_out96[BIT],loot_out97[BIT],loot_out98[BIT],loot_out99[BIT],
            loot_out100[BIT],loot_out101[BIT],loot_out102[BIT],loot_out103[BIT],loot_out104[BIT],loot_out105[BIT],loot_out106[BIT],loot_out107[BIT],loot_out108[BIT],loot_out109[BIT],
            loot_out110[BIT]
            ;

    func_in in_do(data_in17,data_in18,data_in19,data_in20,data_in21,data_in22,data_in23,data_in24,data_in25,data_in26,data_in27,data_in28,data_in29,data_in30,
                data_in33,data_in34,data_in35,data_in36,data_in37,data_in38,data_in39,data_in40,data_in41,data_in42,data_in43,data_in44,data_in45,data_in46,
                data_in49,data_in50,data_in51,data_in52,data_in53,data_in54,data_in55,data_in56,data_in57,data_in58,data_in59,data_in60,data_in61,data_in62,
                data_in65,data_in66,data_in67,data_in68,data_in69,data_in70,data_in71,data_in72,data_in73,data_in74,data_in75,data_in76,data_in77,data_in78,
                data_in81,data_in82,data_in83,data_in84,data_in85,data_in86,data_in87,data_in88,data_in89,data_in90,data_in91,data_in92,data_in93,data_in94,
                data_in97,data_in98,data_in99,data_in100,data_in101,data_in102,data_in103,data_in104,data_in105,data_in106,data_in107,data_in108,data_in109,data_in110,
								start,goal);
  func_out out_do(loot_out0,loot_out1,loot_out2,loot_out3,loot_out4,loot_out5,loot_out6,loot_out7,loot_out8,loot_out9,
            loot_out10,loot_out11,loot_out12,loot_out13,loot_out14,loot_out15,loot_out16,loot_out17,loot_out18,loot_out19,
            loot_out20,loot_out21,loot_out22,loot_out23,loot_out24,loot_out25,loot_out26,loot_out27,loot_out28,loot_out29,
            loot_out30,loot_out31,loot_out32,loot_out33,loot_out34,loot_out35,loot_out36,loot_out37,loot_out38,loot_out39,
            loot_out40,loot_out41,loot_out42,loot_out43,loot_out44,loot_out45,loot_out46,loot_out47,loot_out48,loot_out49,
            loot_out50,loot_out51,loot_out52,loot_out53,loot_out54,loot_out55,loot_out56,loot_out57,loot_out58,loot_out59
            );           
}
