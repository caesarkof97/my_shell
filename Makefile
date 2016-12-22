hello : hello.o fun.o
	cc -o hello hello.o fun.o
hello.o : hello.c hello.h
	cc -c hello.c
fun.o : fun.c hello.h
	cc -c fun.c
clean : 
	rm hello *.o
