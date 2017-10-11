CC=g++

main.exe : main.o rectangle.o
	${CC} -o main.exe main.o rectangle.o
	
main.o : main.cpp rectangle.cpp rectangle.h
	${CC} -c -o main.o main.cpp
	
rectangle.o : rectangle.cpp rectangle.h
	${CC} -c -o rectangle.o rectangle.cpp
	
clean :
	rm *.o
	rm *.exe