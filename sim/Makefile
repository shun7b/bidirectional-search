test.vcd: test.vvp
	vvp test.vvp|tee result.txt
test.vvp: test.v kouka.v add_all.v kanwa.v  min_select.v add_map.v mul_bit.v  meiro.v  seach.v seach_block.v sub_plot.v subs.v  
	iverilog *.v -o test.vvp
min_select.v:min_select.nsl
	nsl2vl min_select.nsl
test.v: test.nsl
	nsl2vl test.nsl -verisim2 -target test -split
add_map.v: add_map.nsl
	nsl2vl add_map.nsl
add_all.v:add_all.nsl
	nsl2vl add_all.nsl
meiro.v: meiro.nsl
	nsl2vl meiro.nsl
muls.v: muls.nsl
	nsl2vl muls.nsl
seach.v: seach.nsl
	nsl2vl seach.nsl
seach_block.v: seach_block.nsl
	nsl2vl seach_block.nsl
sub_plot.v: sub_plot.nsl
	nsl2vl sub_plot.nsl
subs.v: subs.nsl
	nsl2vl subs.nsl
mul_bit.v:mul_bit.nsl
	nsl2vl mul_bit.nsl
kanwa.v: kanwa.nsl
	nsl2vl kanwa.nsl
kouka.v:kouka.nsl
	nsl2vl kouka.nsl
clean:
	rm kouka.v add_all.v min_select.v test.v minus2.v kanwa.v  sub_data_hit.v minus2_core.v add_map.v add_up_down.v avg_all.v avg_lr.v avg_map.v avg_up_down.v meiro.v muls.v avg_all_map.v seach.v mul_bit.v seach_block.v sub_plot.v subs.v add_lr.v  *.vvp *.vcd
