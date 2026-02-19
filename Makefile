NAME 	= libftprintf.a
CC 		= cc
CFLAGS 	= -Wall -Wextra -Werror

SRCS	= ft_printf.c ft_formats.c ft_putchar.c ft_print_char.c ft_print_string.c \
		ft_print_number.c ft_print_unsigned.c ft_print_char.c ft_print_hexl.c \
		ft_print_hexu.c ft_print_pointer.c ft_print_others.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re