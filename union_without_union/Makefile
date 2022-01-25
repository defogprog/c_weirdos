# CC := gcc
CC := clang
CSRC := main.c source1.c source2.c
OBJS := $(CSRC:.c=.o)
CFLAGS := -c 
CFLAGS += -pedantic
CFLAGS += -Wall -Werror
LDFLAGS := -Wl,-Map=map.map
TARGET := weirdo

.PHONY: all clean

%.o:%.c
	$(CC) $< $(CFLAGS) -o $@

all: $(OBJS)
	$(CC) $^ $(LDFLAGS) -o $(TARGET)

clean:
	rm -rf *.o *.map $(TARGET)
