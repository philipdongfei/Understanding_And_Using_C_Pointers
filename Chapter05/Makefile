objects:=*.out *.o
cflags:=-Wall -W -O2
lpoff:=-fwritable-strings # turn off string pooling

str_fund: str_fund.c
	gcc ${cflags} str_fund.c -o str_fund.out
constant_sl: constant_sl.c
	gcc constant_sl.c -o constant_sl.out
str_Oper: str_Oper.c
	gcc str_Oper.c -o str_Oper.out
passing_str: passing_str.c
	gcc passing_str.c -o passing_str.out
passing_arg: passing_arg.c
	gcc passing_arg.c -o passing_arg.out
fn_pt_str: fn_pt_str.c
	gcc fn_pt_str.c -o fn_pt_str.out



.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



