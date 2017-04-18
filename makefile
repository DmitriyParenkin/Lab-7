.PHONY:	all clean
	
all : calc

calc:	mkDir main.o deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc
deposit.o:	src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
main.o:	src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

clean:
	rm -rf build/*.o bin/deposit-calc

mkDir:
	mkdir bin
	mkdir build
rmDir: 
	rm -r bin
	rm -r build
rebuild: rmDir program
	echo "Done!"
