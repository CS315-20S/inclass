# A useful makefile which factors names and flags into make variables
# so the rules can be as generic as possible
# $@ is make's built-in variable for the target (left of :)
# $^ is make's built-in variable for the prereqs (right of :)
# $< is make's built-in variable for the first item in the prereqs

CC=gcc
CFLAGS=-g
ASM=as
ASMFLAGS=-g

OBJS=indexing.o index1.o
EXECUTABLE=indexing

# Link the object files together into the executable
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $^

# Compile C source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Assemble assembly language source files into object files
%.o: %.s
	$(ASM) $(ASMFLAGS) -o $@ $<

clean:
	rm -rf $(EXECUTABLE) $(OBJS)

