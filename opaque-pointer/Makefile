CC=gcc

main: main.o thing.o
	$(CC) -o main main.o thing.o

main.o: main.c
	$(CC) -c main.c
	
thing.o: thing.c
	$(CC) -c thing.c

clean:
	rm main *.o