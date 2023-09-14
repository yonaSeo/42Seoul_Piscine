TARGET=do-op

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRCS=ft_atoi.c ft_putnbr.c ft_do_op.c
OBJS=$(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ 
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ 

all: $(TARGET)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re: fclean all
