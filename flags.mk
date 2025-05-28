##
## EPITECH PROJECT, 2023
## __
## File description:
## flags.mk
##

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -lm
CFLAGS += -fanalyzer

CFLAGS += -iquote ./include -iquote ./Jarvis/include

LDFLAGS += -L ./Jarvis
