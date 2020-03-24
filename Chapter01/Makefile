objects:=*.out *.o
cflags:=-Wall -W -O2

display: display.c
	gcc ${cflags} display.c -o display.out
predefined_type: predefined_type.c
	gcc predefined_type.c -o predefined_type.out
pointer_operators: pointer_operators.c
	gcc pointer_operators.c -o pointer_operators.out



.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



