##
## EPITECH PROJECT, 2024
## starting_project
## File description:
## Makefile
##

include flags.mk

NAME = setting_up

CC := gcc

BUILD_DIR := .build

SRC := $(shell find src -name '*.c')
OBJ := $(SRC:%.c=.build/%.o)

LDFLAGS = -L./Jarvis/ -lmy

GRE := \033[0;32m
GRA := \033[0;37m
BLU := \033[0;34m
RED := \033[0;31m

all:
	@ cd Jarvis/ && $(MAKE) -j --no-print-directory
	@ $(MAKE) $(NAME) -j --no-print-directory

$(NAME): $(OBJ)
	@ $(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	@ echo -e "$(BLU)===--- $(GRE)Compiled$(GRA) < $@ > $(BLU)---===$(GRA)"

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) -c -o $@ $< $(LDFLAGS)
	@ echo -e "$(GRE)Compiled$(GRA) $<"

clean:
	@ cd Jarvis/ && $(MAKE) clean -j --no-print-directory
	@ $(RM) $(SRC:.c=.gcda)
	@ $(RM) $(SRC:.c=.gcno)
	@ $(RM) $(OBJ) $(TOBJ)
	@ $(RM) *.a
	@ echo -e "$(RED)Cleaned$(GRA)"

fclean: clean
	@ cd Jarvis/ && $(MAKE) fclean -j --no-print-directory
	@ $(RM) $(NAME)
	@ $(RM) -r $(BUILD_DIR)
	@ $(RM) *.a
	@ echo -e "$(RED)Force cleaned$(GRA)"

test_run: re
	@ cd tests/ && ./test.sh

.PHONY: clean fclean

re: fclean
	@ cd Jarvis/ && $(MAKE) fclean --no-print-directory
	@ $(MAKE) all -j --no-print-directory

.PHONY: re
