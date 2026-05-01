CC = gcc
LD = ld
LDFLAGS = -static
CFLAGS = -fno-pie -fno-asynchronous-unwind-tables -Og -Wall -Wno-main
STRIP = strip -g

FILES = swap.o mismatch str relo3.o print

all: $(FILES) 

%.o: %.c
	$(CC) $(CFLAGS) $(CFLAGS.$*) -c -o $@ $^
	$(STRIP) $@

%.s: %.c
	$(CC) $(CFLAGS) $(CFLAGS.$*) -S -o $@ $^


# Niech asembler nie próbuje usuwać symboli .LCx
CFLAGS.swap := -Wa,--keep-locals -fpie

# W nowszych dystrybucjach -fno-common jest domyślnie włączony
CFLAGS.mismatch-a := -fcommon
CFLAGS.mismatch-b := -fcommon

# Chcemy wyłącznie relokacji absolutnych: R_X86_64_32*, R_X86_64_64*
CFLAGS.relo3 := -fno-pic

CFLAGS.print := -fno-pic -no-pie -O2 -g

mismatch: mismatch-a.o mismatch-b.o
	$(CC) -static $(LDFLAGS) -o $@ $^


str: str-a.o str-b.o
	$(CC) $(LDFLAGS) -o $@ $^

print: print.c
	$(CC) $(CFLAGS.print) -o $@ $^

clean:
	rm -f *.o *.s *.map *~ *.out
	rm -f $(FILES)

# vim: ts=8 sw=8 noet
