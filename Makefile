main: main.c
	gcc main.c -o main
	./main

clean:
	del main.exe
	del main.o
	del main.s