NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c \
          ft_print_char.c \
		  ft_print_str.c \
		  ft_print_int.c \
		  ft_print_uint.c

OBJETS = $(SOURCES:.c=.o)

all: libft $(NAME)

libft:
	make -C libft

$(NAME): $(OBJETS)
	cp libft/libft.a $(NAME)  ///// macos compatibility
	ar rcs $(NAME) $(OBJETS)

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