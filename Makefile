.SILENT:

compile:
	gcc -c unique.c
	gcc -o test test.c unique.o

run_test: compile
	./test

clean:
	rm -rf unique.o test
