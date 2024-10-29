SRCS = ft_printf.c fonction_format.c fonction_format2.c ./libft/ft_strlen.c ./libft/ft_itoa.c ./libft/ft_putchar.c ./libft/ft_putstr.c ./libft/ft_itoa_base.c ./libft/ft_unitoa.c ./libft/ft_itoa_base_printf.c ./libft/ft_tolower.c
OBJECTS = ${SRCS:.c=.o}
HEADERS = ft_printf.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libftprintf.a
LIBC = ar rcs
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	cd $(LIBFT_PATH) && make

$(NAME): $(LIBFT) $(OBJECTS)
	$(LIBC) $(NAME) $(OBJECTS) $(LIBFT)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
