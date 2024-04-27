declare kanwa{
    input data_in17[BIT],data_in18[BIT],data_in19[BIT],data_in20[BIT],data_in21[BIT],data_in22[BIT],data_in23[BIT],data_in24[BIT],data_in25[BIT],data_in26[BIT],data_in27[BIT],data_in28[BIT],data_in29[BIT],data_in30[BIT],
data_in33[BIT],data_in34[BIT],data_in35[BIT],data_in36[BIT],data_in37[BIT],data_in38[BIT],data_in39[BIT],data_in40[BIT],data_in41[BIT],data_in42[BIT],data_in43[BIT],data_in44[BIT],data_in45[BIT],data_in46[BIT],
data_in49[BIT],data_in50[BIT],data_in51[BIT],data_in52[BIT],data_in53[BIT],data_in54[BIT],data_in55[BIT],data_in56[BIT],data_in57[BIT],data_in58[BIT],data_in59[BIT],data_in60[BIT],data_in61[BIT],data_in62[BIT],
data_in65[BIT],data_in66[BIT],data_in67[BIT],data_in68[BIT],data_in69[BIT],data_in70[BIT],data_in71[BIT],data_in72[BIT],data_in73[BIT],data_in74[BIT],data_in75[BIT],data_in76[BIT],data_in77[BIT],data_in78[BIT],
data_in81[BIT],data_in82[BIT],data_in83[BIT],data_in84[BIT],data_in85[BIT],data_in86[BIT],data_in87[BIT],data_in88[BIT],data_in89[BIT],data_in90[BIT],data_in91[BIT],data_in92[BIT],data_in93[BIT],data_in94[BIT],
data_in97[BIT],data_in98[BIT],data_in99[BIT],data_in100[BIT],data_in101[BIT],data_in102[BIT],data_in103[BIT],data_in104[BIT],data_in105[BIT],data_in106[BIT],data_in107[BIT],data_in108[BIT],data_in109[BIT],data_in110[BIT]
,start[BIT],goal[BIT]   ; 
    output data_out17[BIT],data_out18[BIT],data_out19[BIT],data_out20[BIT],data_out21[BIT],data_out22[BIT],data_out23[BIT],data_out24[BIT],data_out25[BIT],data_out26[BIT],data_out27[BIT],data_out28[BIT],data_out29[BIT],data_out30[BIT],
data_out33[BIT],data_out34[BIT],data_out35[BIT],data_out36[BIT],data_out37[BIT],data_out38[BIT],data_out39[BIT],data_out40[BIT],data_out41[BIT],data_out42[BIT],data_out43[BIT],data_out44[BIT],data_out45[BIT],data_out46[BIT],
data_out49[BIT],data_out50[BIT],data_out51[BIT],data_out52[BIT],data_out53[BIT],data_out54[BIT],data_out55[BIT],data_out56[BIT],data_out57[BIT],data_out58[BIT],data_out59[BIT],data_out60[BIT],data_out61[BIT],data_out62[BIT],
data_out65[BIT],data_out66[BIT],data_out67[BIT],data_out68[BIT],data_out69[BIT],data_out70[BIT],data_out71[BIT],data_out72[BIT],data_out73[BIT],data_out74[BIT],data_out75[BIT],data_out76[BIT],data_out77[BIT],data_out78[BIT],
data_out81[BIT],data_out82[BIT],data_out83[BIT],data_out84[BIT],data_out85[BIT],data_out86[BIT],data_out87[BIT],data_out88[BIT],data_out89[BIT],data_out90[BIT],data_out91[BIT],data_out92[BIT],data_out93[BIT],data_out94[BIT],
data_out97[BIT],data_out98[BIT],data_out99[BIT],data_out100[BIT],data_out101[BIT],data_out102[BIT],data_out103[BIT],data_out104[BIT],data_out105[BIT],data_out106[BIT],data_out107[BIT],data_out108[BIT],data_out109[BIT],data_out110[BIT]
;
            func_in in_do(data_in17,data_in18,data_in19,data_in20,data_in21,data_in22,data_in23,data_in24,data_in25,data_in26,data_in27,data_in28,data_in29,data_in30,
            data_in33,data_in34,data_in35,data_in36,data_in37,data_in38,data_in39,data_in40,data_in41,data_in42,data_in43,data_in44,data_in45,data_in46,
            data_in49,data_in50,data_in51,data_in52,data_in53,data_in54,data_in55,data_in56,data_in57,data_in58,data_in59,data_in60,data_in61,data_in62,
            data_in65,data_in66,data_in67,data_in68,data_in69,data_in70,data_in71,data_in72,data_in73,data_in74,data_in75,data_in76,data_in77,data_in78,
            data_in81,data_in82,data_in83,data_in84,data_in85,data_in86,data_in87,data_in88,data_in89,data_in90,data_in91,data_in92,data_in93,data_in94,
            data_in97,data_in98,data_in99,data_in100,data_in101,data_in102,data_in103,data_in104,data_in105,data_in106,data_in107,data_in108,data_in109,data_in110,
            start,goal);
    func_out out_do(data_out17,data_out18,data_out19,data_out20,data_out21,data_out22,data_out23,data_out24,data_out25,data_out26,data_out27,data_out28,data_out29,data_out30,
        data_out33,data_out34,data_out35,data_out36,data_out37,data_out38,data_out39,data_out40,data_out41,data_out42,data_out43,data_out44,data_out45,data_out46,
        data_out49,data_out50,data_out51,data_out52,data_out53,data_out54,data_out55,data_out56,data_out57,data_out58,data_out59,data_out60,data_out61,data_out62,
        data_out65,data_out66,data_out67,data_out68,data_out69,data_out70,data_out71,data_out72,data_out73,data_out74,data_out75,data_out76,data_out77,data_out78,
        data_out81,data_out82,data_out83,data_out84,data_out85,data_out86,data_out87,data_out88,data_out89,data_out90,data_out91,data_out92,data_out93,data_out94,
        data_out97,data_out98,data_out99,data_out100,data_out101,data_out102,data_out103,data_out104,data_out105,data_out106,data_out107,data_out108,data_out109,data_out110
    );

} 
