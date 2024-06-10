ABC.exe:main.o add2.o big3.o fact.o
	gcc -o ABC.exe main.o add2.o big3.o fact.o
main.o:main.c
	gcc -c main.c
add2.o:add2.c
	gcc -c add2.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
	 

