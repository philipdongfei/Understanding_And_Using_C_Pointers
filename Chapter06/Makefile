objects:=*.out *.o
cflags:=-Wall -W -O2
lpoff:=-fwritable-strings # turn off string pooling

struct_declare: struct_declare.c
	gcc ${cflags} struct_declare.c -o struct_declare.out
struct_pool: struct_pool.c
	gcc struct_pool.c -o struct_pool.out
single_linked_list: single_linked_list.c
	gcc single_linked_list.c -o single_linked_list.out
pt_tree: pt_tree.c employee.h
	gcc pt_tree.c employee.h -o pt_tree.out



.PHONY : clean
clean :
	-rm edit $(objects)
	echo Clean done



