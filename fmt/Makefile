CC=gcc
CCFLAGS=-g

SOURCES:=$(wildcard *.c)
EXECS=$(patsubst %.c,%,$(SOURCES))

all: $(EXECS) 

$(EXECS): %: %.c
	$(CC) $(CCFLAGS) -o $@ $<

clean:
	rm $(EXECS) 
