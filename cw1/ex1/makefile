# Main makefile

main: main.cpp main.h printer
	g++ main.cpp printer -o main

printer: dbgPrint.cpp dbgPrint.h
	g++ -c dbgPrint.cpp -o printer

.PHONY:clean

clean:
	rm -f ./main
	rm -f ./*.o
