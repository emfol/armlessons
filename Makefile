.PHONY: clean

CFLAGS += -ansi -pedantic -O2 -g -Wall

all: args.bin oops.bin

args.bin: args.c
	$(CC) $(CFLAGS) -o $@ $<

add3sub1.o: add3sub1.s
	$(AS) -march=armv8-a+simd -k -o $@ $<

oops.bin: oops.c add3sub1.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.bin
