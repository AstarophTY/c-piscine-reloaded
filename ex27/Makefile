CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCES = main.c ft_putchar.c ft_putstr.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = ft_display_file

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all