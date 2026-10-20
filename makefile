test: test.c mult.o add.o
	gcc test.c mult.o add.o -o test
mult.o: mult.c
	gcc -c mult.c 
add.o: add.c
	gcc -c add.c
clean:
	rm -f test mult.o add.o