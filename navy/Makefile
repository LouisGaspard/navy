##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

NAME	= navy

CC	= gcc

RM	= rm -f

SRCS	=	./src/main.c		\
		./src/get_next_line.c	\
		./src/check_input.c	\
		./src/my_print_map.c	\
		./src/malloc_tab.c	\
		./src/first_fill.c	\
		./src/place_boat.c	\
		./src/size_boat.c	\
		./src/map.c		\
		./src/my_maps.c		\
		./src/handle_signal.c	\
		./src/get_sig_start.c	\
		./src/my_send.c		\
		./src/my_receive.c	\
		./src/hiy_or_miss.c	\
		./src/attack.c		\
		./src/win.c		\
		./src/game.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra

LIB	= -L ./lib/ -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my/
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)

tests_run:
	make -C ./tests/
	./tests/units

clean:
	make clean -C ./lib/my/
	make clean -C ./tests/
	$(RM) $(OBJS)

fclean: clean
	$(RM) ./lib/libmy.a
	$(RM) ./tests/units
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
