SRC=main.cpp land.cpp character.cpp
CXX=g++
FLAGS=-std=c++11

main: $(SRC)
	$(CXX) $^ -o $@ $(FLAGS)

clean:
	rm main
