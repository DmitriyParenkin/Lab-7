.PHONY:	all clean

#Calc
	
all : calc calc-test

calc:	mkDir main.o deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc

deposit.o:	src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

main.o:	src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

clean:
	rm -rf build/*.o bin/*

mkDir:
	mkdir bin
	mkdir build/src

rmDir: 
	rm -r bin
	rm -r build/src
	rm –r build/test

mkDirtest:
	mkdir build/test

#Tests

calc-test: mkDirtest deposit_test.o main.o validation_test.o
	gcc build/test/deposit_test.o build/test/main.o build/test/validation_test.o –o bin/deposit-calc-test

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty src -c test/deposit_test.c -o build/test/deposit_test.o 

build/test/main.o: test/main.c
	gcc -I thirdparty src -c test/main.c -o build/test/main.o

build/test/validation_test.o: test/validation_test.c
	gcc -I thirdparty src -c test/validation_test.c -o build/test/validation_test.o


