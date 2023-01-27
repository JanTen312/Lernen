HEADERS=prototyp.h

default: main

main.o: main.c $(HEADERS)
  	  gcc -c main.c -o main.o
      
funktion.o: funktion.c $(HEADERS)
  	  gcc -c funktion.c -o funktion.o
      
main: main.o funktion.o
      gcc main.o funktion.o -o main
      
clean:
-rm -f *.o
-rm -f main
