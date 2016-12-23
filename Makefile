hello : hello.o fun.o add_2.o
	cc -o hello hello.o fun.o add_2.o
hello.o : hello.c hello.h
	cc -c hello.c 
fun.o : fun.c hello.h
	cc -c fun.c
add_2.o: add_2.c hello.h
	cc -c add_2.c
clean : 
	rm hello *.o
