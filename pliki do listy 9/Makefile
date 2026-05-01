LD = ld
LDFLAGS = -static
CC = gcc -ggdb
CFLAGS = -Og -Wall -g
STRIP = strip

FILES = ropex ropex.in

all: $(FILES)

%.o: %.c
	$(CC) $(CFLAGS) $(CFLAGS.$*) -c -o $@ $^

%.s: %.c
	$(CC) $(CFLAGS) $(CFLAGS.$*) -S -o $@ $^

ropex: CC += -static
ropex: CFLAGS += -fno-pie -fno-stack-protector -fno-asynchronous-unwind-tables 
ropex: ropex.o ropex.o gadget.o
	$(CC) $(CFLAGS) -Wl,-Map=$@.map -o $@ $^

ropex.in: ropex.in.txt
	# requires `xxd` package to be installed
	xxd -r $^ >$@

clean:
	rm -f *.o *.map *~
	rm -f $(FILES)

