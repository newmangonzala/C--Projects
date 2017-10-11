CC=g++

main.exe : main.o complex.o
	${CC} -o main.exe main.o complex.o
	
main.o : main.cpp complex.cpp complex.h
	${CC} -c -o main.o main.cpp
	
complex.o : complex.h complex.cpp
	${CC} -c -o complex.o complex.cpp 
	
clean :
	rm *.o
	rm *.exe