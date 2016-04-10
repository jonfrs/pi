############## Makefile Cálculo PI ################
SRC=main.c
EXEC=pi
CFLAGS=-W -Wall -Wpedantic -lm
CC=gcc
CCV=-std=c99
		%(CC) %(CCV) $(SRC) -o $(EXEC) %(CFLAGS)