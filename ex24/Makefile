CC = cc
CFLAGS = -Wall -Werror -Wextra -Iincludes
SOURCES = srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strcmp.c \
		  srcs/ft_strlen.c \
		  srcs/ft_swap.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = libft.a

all: $(TARGET)

$(TARGET): $(OBJECTS)
	ar rcs $(TARGET) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all