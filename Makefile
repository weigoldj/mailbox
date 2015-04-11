
# compiler
CC=g++

# look in the current directory for include files 
CFLAGS=-I.

# tell make that we are dependant on these files
DEPS = mailbox.h 

OBJ = app_main.o mailbox.o
# g++ -Wall hello.cpp -o hello


%.o: %.c $(DEPS)
	$(CC) -std=c++11 -c -o $@ $< $(CFLAGS)

mailbox: $(OBJ)
	$(CC) -std=c++11 -o $@ $^ $(CFLAGS)