CC = g++
COMPILER_FLAGS = -w -std=c++20 
#LINKER_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system
LINKER_FLAGS = -lm
game: game.o ecs.o component.o vector.o
	$(CC) game.o ecs.o component.o vector.o -o game $(COMPILER_FLAGS) $(LINKER_FLAGS)

game.o: game.cpp game.h
	$(CC) -c game.cpp -o game.o $(COMPILER_FLAGS)

ecs.o: ecs.cpp ecs.h 
	$(CC) -c ecs.cpp -o ecs.o $(COMPILER_FLAGS)

component.o: component.cpp component.h
	$(CC) -c component.cpp -o component.o $(COMPILER_FLAGS)

vector.o: vector.cpp vector.h
	$(CC) -c vector.cpp -o vector.o $(COMPILER_FLAGS)

clean:
	rm *.o game