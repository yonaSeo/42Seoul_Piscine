TARGET=libft.a

CC=cc
CFLAGS=-c -Wall -Wextra -Werror
SRCS=srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS=$(SRCS:.c=.o)

$(TARGET): $(OBJS)
	ar -cr $@ $^
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I includes/ft.h

all: $(TARGET)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re: fclean all
