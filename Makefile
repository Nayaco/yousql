CC  = gcc -m32 -static
CCL = gcc -static 
INCLUDE = -I.
DST = test.exe
MODULE = lib/fs.o

$(DST): $(MODULE) test.o
	$(CC) test.o $(MODULE) -o $(DST) $(INCLUDE)

test.o: test.c
	$(CC) -c test.c -o test.o -O2 $(INCLUDE)

lib/fs.o: lib/fs.c
	$(CC) -c ./lib/fs.c -o ./lib/fs.o $(INCLUDE) -O2

