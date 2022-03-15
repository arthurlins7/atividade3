all:
	gcc testprogram.c -o test
	
run:
	./test

clean:
	rm test