FILE = 2066

all: clean

build:
	gcc $(FILE).c -o $(FILE).out

run: build
	./$(FILE).out < INPUT

clean: run
	rm -f *.out