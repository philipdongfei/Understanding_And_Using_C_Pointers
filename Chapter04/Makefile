objects:=*.out *.o
cflags:=-Wall -W -O2

2_Dim_Arr: 2_Dim_Arr.c
	gcc ${cflags} 2_Dim_Arr.c -o 2_Dim_Arr.out
getLine: getLine.c
	gcc getLine.c -o getLine.out
trim: trim.c
	gcc trim.c -o trim.out
passing_1D_Arr: passing_1D_Arr.c
	gcc passing_1D_Arr.c -o passing_1D_Arr.out
passing_1D_pt: passing_1D_pt.c
	gcc passing_1D_pt.c -o passing_1D_pt.out
pt_multiD_arr: pt_multiD_arr.c
	gcc pt_multiD_arr.c -o pt_multiD_arr.out
passing_multiD_arr: passing_multiD_arr.c
	gcc passing_multiD_arr.c -o passing_multiD_arr.out
jagged_arr_pt: jagged_arr_pt.c
	gcc jagged_arr_pt.c -o jagged_arr_pt.out



.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



