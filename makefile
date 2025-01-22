all: build run

build:
	g++ problems.cpp -o projectEulerProblemsAndTests

run:
	./projectEulerProblemsAndTests

test: build
	./projectEulerProblemsAndTests --run-tests
