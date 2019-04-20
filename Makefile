CC=gcc
CFLAGS= -g
OBJS=mainTree.o binaryTreeFunctions.o

output.out: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

mainTree.o: mainTree.c binaryTree.h
	$(CC) $(CFLAGS) -c mainTree.c

binaryTreeFunctions.o: binaryTreeFunctions.c binaryTree.h
	$(CC) $(CFLAGS) -c binaryTreeFunctions.c

clean:
	rm *.o output.out
