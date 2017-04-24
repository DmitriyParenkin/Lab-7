.PHONY:	all clean

#Calc
	
all : calc calc-test

calc:	mkDir deposit.o main.o
	gcc build/src/deposit.o build/src/main.o -o bin/deposit-calc

deposit.o:	src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

main.o:	src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

clean:
	rm -rf build/*.o bin/*

mkDir:
	mkdir bin
	mkdir build
	mkdir build/src
	mkdir build/test

rmDir: 
	rm -r bin
	rm -r build
	rm -rf build/src
	rm -rf build/test


#Tests

calc-test: build/test/deposit_test.o build/test/validation_test.o build/test/main.o
	gcc build/test/deposit_test.o build/test/validation_test.o build/test/main.o -o bin/deposit-calc-test

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -c test/deposit_test.c -o build/test/deposit_test.o 

build/test/validation_test.o: test/validation_test.c
	gcc -I thirdparty -c test/validation_test.c -o build/test/validation_test.o

build/test/main.o: test/main.c
	gcc -I thirdparty -c test/main.c -o build/test/main.o
