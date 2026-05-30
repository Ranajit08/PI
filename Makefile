main: ./src/main.c
	gcc src/main.c -o builds/pi.exe
	./builds/pi.exe

clean:
	del .\builds\*.exe
	del .\builds\*.o
	del .\builds\*.s