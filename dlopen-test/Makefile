CC=gcc
CCFLAGS=-g

NVCC=nvcc
NVCCFLAGS=-g

LIBS=dl
LINKFLAGS=$(patsubst %,-l%,$(LIBS))

CUDALIBS=nvidia-ml
CUDALINKFLAGS=$(patsubst %,-l%,$(CUDALIBS))


SOURCES:=$(wildcard *.c)
EXECS=$(patsubst %.c,%,$(SOURCES))

all: $(EXECS) dupci_monitor

$(EXECS): %: %.c
	$(CC) $(CCFLAGS) $(LINKFLAGS) -o $@ $<

dupci_monitor : dupci_monitor.cu
	$(NVCC) $(NVCCFLAGS) $(CUDALINKFLAGS) -o dupci_monitor dupci_monitor.cu

clean:
	rm $(EXECS) dupci_monitor
