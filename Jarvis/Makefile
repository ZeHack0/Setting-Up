##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## .
##

LIB = libmy.a

CC := gcc

BUILD_DIR := .build

SRC := $(shell find src -name '*.c')
OBJ := $(SRC:%.c=$(BUILD_DIR)/%.o)

CFLAGS = -Wall -Wextra -g -I include/

GRE := \033[0;32m
GRA := \033[0;37m
BLU := \033[0;34m
RED := \033[0;31m

all: $(LIB)
.PHONY: all

$(LIB): $(OBJ)
	@ $(AR) rc ./libmy.a $(OBJ)
	@ echo -e "$(BLU)===--- $(GRE)Compiled$(GRA) < $@ > $(BLU)---===$(GRA)"

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) -c -o $@ $<
	@ echo -e "$(GRE)Compiled$(GRA) $<"

clean:
	@ $(RM) $(SRC:.c=.gcda)
	@ $(RM) $(SRC:.c=.gcno)
	@ $(RM) $(OBJ) $(TOBJ)
	@ $(RM) *.0
	@ echo -e "$(RED)Cleaned$(GRA)"

fclean: clean
	@ $(RM) $(LIB)
	@ $(RM) -r $(BUILD_DIR)
	@ $(RM) *.0
	@ echo -e "$(RED)Force cleaned$(GRA)"

.PHONY: clean fclean

re: fclean
	@ $(MAKE) all -j --no-print-directory

.PHONY: re
