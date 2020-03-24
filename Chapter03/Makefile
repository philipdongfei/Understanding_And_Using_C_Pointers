objects:=*.out *.o
cflags:=-Wall -W -O2

stack_frame: stack_frame.c
	gcc ${cflags} stack_frame.c -o stack_frame.out
passing_data: passing_data.c
	gcc passing_data.c -o passing_data.out
passing_pc: passing_pc.c
	gcc passing_pc.c -o passing_pc.out
returning_pt: returning_pt.c
	gcc returning_pt.c -o returning_pt.out
raii_test: raii_test.c
	gcc raii_test.c -o raii_test.out
pt_localdata: pt_localdata.c
	gcc pt_localdata.c -o pt_localdata.out
passing_pt: passing_pt.c
	gcc passing_pt.c -o passing_pt.out
passing_pt2pt: passing_pt2pt.c
	gcc passing_pt2pt.c -o passing_pt2pt.out
safeFree: safeFree.c
	gcc safeFree.c -o safeFree.out
using_fp: using_fp.c
	gcc using_fp.c -o using_fp.out
passing_fp: passing_fp.c
	gcc passing_fp.c -o passing_fp.out
casting_fp: casting_fp.c
	gcc casting_fp.c -o casting_fp.out


.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done


