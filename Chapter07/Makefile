objects:=*.out *.o
cflags:=-Wall -W -O2
lpoff:=-fwritable-strings # turn off string pooling

str_sec: str_sec.c
	gcc ${cflags} str_sec.c -o str_sec.out
fn_pt_error: fn_pt_error.c
	gcc ${cflags} fn_pt_error.c -o fn_pt_error.out



.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



