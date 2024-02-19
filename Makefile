##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## .
##

NAME = setting_up

SRC = src/main.c

SRC += src/map/load_map.c
SRC += src/map/init_maps.c
SRC += src/map/get_width.c
SRC += src/map/get_height.c
SRC += src/map/nbr_char_line.c

SRC += src/algo/algorithm.c
SRC += src/algo/set_biggest_square.c

SRC += src/description/description.c

SRC += src/error_gestion/argument_error.c
SRC += src/error_gestion/check_all_error.c
SRC += src/error_gestion/first_line_error.c

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I./include -I./lib/include -g

LFLAGS = -L. -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C lib/
	gcc -o $(NAME) $(OBJS) $(LFLAGS) -g

clean:
	$(RM) $(OBJS)
	make clean -C lib/
	$(RM) *.a

fclean: clean
	$(RM) $(NAME)
	$(RM) *.a

re: fclean all

debug:
	$(WFLAGS) -g

.PHONY: all clean fclean re debug
