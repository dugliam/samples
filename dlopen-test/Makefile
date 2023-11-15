CC=gcc

all: dlopenTest symbolsTest

dlopenTest: dlopenTest.c
	$(CC) -ldl dlopenTest.c -o dlopenTest

symbolsTest: symbolsTest.c
	$(CC) -ldl symbolsTest.c -o symbolsTest

clean:
	rm dlopenTest symbolsTest
