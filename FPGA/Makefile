all: test.v meiro.v seach.v seach_block.v kanwa.v add_all.v add_map.v mul_bit.v kouka.v subs.v sub_plot.v min_select.v  
	/home/inoue/intelFPGA_lite/21.1/quartus/bin/quartus_sh -t ./test.tcl -project test test.v meiro.v seach.v seach_block.v kanwa.v add_all.v add_map.v mul_bit.v kouka.v subs.v sub_plot.v min_select.v
	/home/inoue/intelFPGA_lite/21.1/quartus/bin/quartus_sh --flow compile test
test.v: test.nsl
	nsl2vl test.nsl  -neg_res -I
meiro.v:meiro.nsl
	nsl2vl meiro.nsl  -neg_res -I
seach.v:seach.nsl
	nsl2vl seach.nsl  -neg_res -I
seach_block.v:seach_block.nsl
	nsl2vl seach_block.nsl  -neg_res -I
kanwa.v:kanwa.nsl
	nsl2vl kanwa.nsl  -neg_res -I
add_all.v:add_all.nsl
	nsl2vl add_all.nsl  -neg_res -I
add_map.v:add_map.nsl
	nsl2vl add_map.nsl  -neg_res -I
kouka.v:kouka.nsl
	nsl2vl kouka.nsl  -neg_res -I
subs.v:subs.nsl
	nsl2vl subs.nsl  -neg_res -I
sub_plot.v:sub_plot.nsl
	nsl2vl sub_plot.nsl  -neg_res -I
mul_bit.v:mul_bit.nsl
	nsl2vl mul_bit.nsl  -neg_res -I
min_select.v:min_select.nsl
	nsl2vl min_select.nsl  -neg_res -I
clean:
	rm  *.v  *.vvp *.vcd
