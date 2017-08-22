FLAGS = -Wall -std=c++11 -pedantic -ansi


.PHONY: all clear vai doxy

all: bin/main bin/main.o bin/sapo.o 

#Gerando executavel
bin/main : bin/main.o bin/sapo.o 
	g++ $^ -o $@

#Gerando objetos
bin/main.o : src/main.cpp
	g++ $^ -c -I include -o $@ $(FLAGS)

bin/sapo.o : src/sapo.cpp
	g++ $^ -c -I include -o $@ $(FLAGS)


#clear
clear:
	rm bin/*.o

vai:
	bin/main




