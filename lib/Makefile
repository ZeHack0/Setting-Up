##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## .
##

NAME = libmy.a

SRC = src/mini_printf.c
SRC += src/my_compute_power_rec.c
SRC += src/my_compute_square_root.c
SRC += src/my_find_prime_sup.c
SRC += src/my_getnbr.c
SRC += src/my_is_prime.c
SRC += src/my_isneg.c
SRC += src/my_put_nbr.c
SRC += src/my_putchar.c
SRC += src/my_putstr.c
SRC += src/my_revstr.c
SRC += src/my_strcmp.c
SRC += src/my_str_to_word_array.c
SRC += src/my_strcpy.c
SRC += src/my_strncpy.c
SRC += src/my_strlen.c
SRC += src/my_swap.c
SRC += src/my_strdup.c
SRC += src/my_strstr.c
SRC += src/my_strncmp.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

CFLAGS = -Wall -Wextra -g

$(NAME): $(OBJS)
	ar rc libmy.a $(OBJS)
	mv $(NAME) ../

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ../$(NAME)

re: fclean all

.PHONY: all clean fclean re debug
