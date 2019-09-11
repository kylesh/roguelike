SRC=main.cpp land.cpp character.cpp roguelike.cpp
CXX=g++
FLAGS=-std=c++11

main: $(SRC)
	$(CXX) $^ -o $@ $(FLAGS)

clean:
	rm main
