objects:=*.out *.o
cflags:=-Wall -W -O2

basic_step: basic_step.c
	gcc ${cflags} basic_step.c -o basic_step.out
calloc_test: calloc_test.c
	gcc calloc_test.c -o calloc_test.out
realloc_test: realloc_test.c
	gcc realloc_test.c -o realloc_test.out
realloc_test1: realloc_test1.c
	gcc realloc_test1.c -o realloc_test1.out
raii_test: raii_test.c
	gcc raii_test.c -o raii_test.out


.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done

