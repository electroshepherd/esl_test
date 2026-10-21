project: main.o vectors.o
	gcc main.o vectors.o -o project
main.o: main.c vectors.h 
	gcc -c main.c -o main.o
vectors.o: vectors.c vectors.h
	gcc -c vectors.c -o vectors.o
clean: 
	rm -f main.o vectors.o project
.PHONY: clean
