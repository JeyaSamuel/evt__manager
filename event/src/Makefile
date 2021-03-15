IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../bin
LDIR =../lib

LIBS=-lm

_DEPS = modulepr.h eventmanager.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init1.o modulepr.o eventmanager.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/evt: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
