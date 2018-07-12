CC  = gcc -static
CCL = gcc -static 
INCLUDE = -I.
DST = test
MODULE = lib/fs

$(DST): $(MODULE).o  test.o
	$(CC) test.o $(MODULE).o  -o $(DST) $(INCLUDE)

test.o: test.c
	$(CC) -c test.c -o test.o -O2 $(INCLUDE)

$(MODULE).o: $(MODULE).c
	$(CC) -c ./$(MODULE).c -o ./$(MODULE).o $(INCLUDE) -O2
