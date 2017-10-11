CC=g++

main.exe : main.o Linked.o
	${CC} -o main.exe main.o Linked.o
	
main.o : main.cpp Linked.cpp Linked.h
	${CC} -c -o main.o main.cpp
	
Linked.o : Linked.cpp Linked.h
	${CC} -c -o Linked.o Linked.cpp
	
clean :
	rm *.o
	rm *.exe