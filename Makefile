NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c \
          ft_print_char.c \

OBJETS = $(SOURCES:.c=.o)

all: libft $(NAME)

libft:
	make -C libft

$(NAME): $(OBJETS)
	ar rcs $(NAME) $(OBJETS) libft/libft.a

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJETS)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re libft