objects:=*.out *.o
cflags:=-Wall -W -O2
lpoff:=-fwritable-strings # turn off string pooling
aloff:=-fno-strict-aliasing
alon:=-fstrict-aliasing
alw:=-Wstrict-aliasing

determing_endian: determing_endian.c
	gcc ${cflags} determing_endian.c -o determing_endian.out
fn_pt_error: fn_pt_error.c
	gcc ${cflags} fn_pt_error.c -o fn_pt_error.out
using_union: using_union.c
	gcc ${cflags} using_union.c -o using_union.out
using_restrict_kw: using_restrict_kw.c
	gcc ${cflags} using_restrict_kw.c -o using_restrict_kw.out
pt_multiple_thread: pt_multiple_thread.c
	gcc ${cflags} -pthread pt_multiple_thread.c -o pt_multiple_thread.out
fn_pthread_callBack: fn_pthread_callBack.c
	gcc ${cflags} -pthread fn_pthread_callBack.c -o fn_pthread_callBack.out
opaque_pt: opaque_pt.c link.h link.c
	gcc ${cflags} opaque_pt.c link.c  -o opaque_pt.out
	# error: dereferencing pointer to incomplete type 'Shape'
Shape_main: Shape_test.o  
	gcc  Shape_test.o  -o Shape_main.out
Shape_test.o: Shape_test.c Shape.o
	gcc -c Shape_test.c Shape.o
Shape.o: Shape.c Shape.h 
	gcc -c Shape.c Shape.h 
# error
# success: main in Shape.c
Shape: Shape.c Shape.h
	gcc Shape.c -o Shape.out





.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



