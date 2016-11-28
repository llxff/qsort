build:
	mkdir -p bin
	gcc src/main.c src/qsort.c -o bin/main

run:
	make build
	bin/main

tests:
	mkdir -p bin
	gcc src/test.c src/qsort.c src/expect.c -o bin/test
	bin/test
