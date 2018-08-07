hepsi: derle calistir
Nesneler :=   ./lib/Liste.o   ./lib/Agac.o	./lib/Islem.o

derle:
	g++ -I ./include/ -o ./lib/Liste.o -c ./src/Liste.cpp
	g++ -I ./include/ -o ./lib/Agac.o -c ./src/Agac.cpp
	g++ -I ./include/ -o ./lib/Islem.o -c ./src/Islem.cpp
	g++ -I ./include/ -o ./bin/test $(Nesneler) ./src/test.cpp
	
calistir:
	./bin/test