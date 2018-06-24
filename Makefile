CC  = gcc -static
CCL = gcc -static 
INCLUDE = -I.
DST = test
MODULE = lib/block
MODULE2 = lib/chain

$(DST): $(MODULE).o $(MODULE2).o test.o
	$(CC) test.o $(MODULE).o $(MODULE2).o -o $(DST) $(INCLUDE)

test.o: test.c
	$(CC) -c test.c -o test.o -O2 $(INCLUDE)

$(MODULE).o: $(MODULE).c
	$(CC) -c ./$(MODULE).c -o ./$(MODULE).o $(INCLUDE) -O2

$(MODULE2).o: $(MODULE2).c
	$(CC) -c ./$(MODULE2).c -o ./$(MODULE2).o $(INCLUDE) -O2
