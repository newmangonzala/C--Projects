CC=g++

main.exe : main.o player.o
	${CC} -o main.exe main.o player.o
	
main.o : main.cpp player.cpp player.h
	${CC} -c -o main.o main.cpp
	
player.o : player.cpp player.h
	${CC} -c -o player.o player.cpp
	
clean :
	rm *.o
	rm *.exe