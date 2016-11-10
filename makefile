compile: signals.o
	gcc -o signals.out signals.o

signals.o: signals.c
	gcc -c signals.c

run: signals.out
	./signals.out

clean:
	rm *.out 
	rm *.o
