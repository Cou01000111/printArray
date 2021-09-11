PROGRAM := libParray.a
CC := gcc
CFLAG := -Wall -Wextra -Werror
INCLUDE := -I./include
SRCDIR := ./src
SRCS := $(wildcard $(SRCDIR)/*.c)
OBJDIR := $(SRCDIR)
OBJS := $(SRCS:%.c=%.o)
LIB := ./$(PROGRAM)

test: $(SRCS) ./test.c $(LIB)
	$(CC) $(INCLUDE) $(CFLAG) ./test.c -o ./$@ -L./ -lParray

lib: $(LIB)

$(OBJS): $(SRCS)
	$(CC) $(INCLUDE) $(CFLAG) -c $(@:%.o=%.c) -o ./$@

$(LIB): $(OBJS)
	ar r $(LIB) $(OBJS)

$(TARGET): $(SRCS)
	$(CC) $(INCLUDE) -c $(SRCS) -o $(OBJS)
	ar rcs $(TARGET) $(OBJS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(LIB)

re: fclean lib test
