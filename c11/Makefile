objects = main.o constructor.o

Exe : $(objects)
	g++ -g -std=c++11 -o Exe $(objects)

main.o : main.cpp constructor.h
	g++ -g -c -std=c++11 main.cpp

constructor.o : constructor.h constructor.cpp 
	g++ -g -c -std=c++11 constructor.cpp

.PHONY : clean
clean : 
	rm Exe $(objects)
