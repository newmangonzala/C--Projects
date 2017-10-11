CC=g++

main.exe : main.o grocery.o
	${CC} -o main.exe main.o grocery.o
	
main.o : main.cpp grocery.cpp grocery.h
	${CC} -c -o main.o main.cpp
	
grocery.o : grocery.cpp grocery.h
	${CC} -c -o grocery.o grocery.cpp
	
clean :
	rm *.o
	rm *.exe