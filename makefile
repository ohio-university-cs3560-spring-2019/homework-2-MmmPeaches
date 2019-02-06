func: main.o func.o
	g++ -o func main.o func.o

main.o: main.cc func.h
	g++ -c main.cc

func.o: func.cc func.h
	g++ -c func.cc 
