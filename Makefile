CC  = gcc -static
CCL = gcc -static 
INCLUDE = -I.
DST = test
MODULE = lib/hash
MODULE2 = lib/hashStorage
MODULE3 = lib/stack

$(DST): $(MODULE).o $(MODULE2).o $(MODULE3).o test.o
	$(CC) test.o $(MODULE).o $(MODULE2).o $(MODULE3).o -o $(DST) $(INCLUDE)

test.o: test.c
	$(CC) -c test.c -o test.o -O2 $(INCLUDE)

$(MODULE).o: $(MODULE).c
	$(CC) -c ./$(MODULE).c -o ./$(MODULE).o $(INCLUDE) -O2

$(MODULE2).o: $(MODULE2).c
	$(CC) -c ./$(MODULE2).c -o ./$(MODULE2).o $(INCLUDE) -O2

$(MODULE3).o: $(MODULE3).c
	$(CC) -c ./$(MODULE3).c -o ./$(MODULE3).o $(INCLUDE) -O2
