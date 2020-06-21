output: string.o stringTest.o
	gcc -std=c18 string.o message.o -o output

string.o: string.c 
	gcc -std=c18 string.c 

stringTest.o: string.o string.h
	gcc -std=c18 string.o
clean:
	rm *.o output