CC  = gcc -static
CCL = gcc -static 
INCLUDE = -I.
DST = test
MODULE = lib/stack.o

$(DST): $(MODULE) test.o
	$(CC) test.o $(MODULE) -o $(DST) $(INCLUDE)

test.o: test.c
	$(CC) -c test.c -o test.o -O2 $(INCLUDE)

lib/stack.o: lib/stack.c
	$(CC) -c ./lib/stack.c -o ./lib/stack.o $(INCLUDE) -O2

