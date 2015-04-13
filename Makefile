
# $?  list of dependencies changed more recently than current target.
# $@  name of current target.
# $<	name of current dependency.
# $*	name of current dependency without extension.

SHELL = /bin/sh

# compiler
CC=g++ -std=c++11

# directory definitions
srcdir=./src
ODIR=./obj

# look in the current directory for include files 
CFLAGS=-g -Wall

# tell make that we are dependant on these files
DEPS = mailbox.h config.h

OBJ = app_main.o config.o mailbox.o

%.o: %.cpp $(DEPS)
	@echo "compiling o files" 
	$(CC) -I$(srcdir) $(CFLAGS) -c $< -o $(ODIR)/$@

mailbox: $(OBJ)
	@echo "compiling mailbox"
	$(CC) -o $@ $(ODIR)/app_main.o $(ODIR)/config.o $(ODIR)/mailbox.o $(CFLAGS)
	#$(CC) -o $@ $(ODIR)/$^ $(CFLAGS)

.PHONY: clean
clean:
	rm -rf obj/*.o mailbox
