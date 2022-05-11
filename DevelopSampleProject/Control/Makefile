CC=gcc
AR=ar
INCLUDE_FLAGS=-I.
LINK_FLAGS=r
DEBUG_FLAGS=
CFLAGS=-g

SRCS = fan.c \
       fan_control.c	

OBJ = $(SRCS:.c=.o)

EXEC=fan_control.a

.PHONY = clean all

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(AR) $(LINK_FLAGS) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ) $(EXEC)
