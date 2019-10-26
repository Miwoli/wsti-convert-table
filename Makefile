compiler=g++
VPATH=src:o_files

__: main
main : main.o ratio.o
	$(compiler) o_files/main.o ./o_files/ratio.o -o converter.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

ratio.o : ratio.cpp
	$(compiler) -c ./src/ratio.cpp -o ./o_files/ratio.o