##
## EPITECH PROJECT, 2018
## unitair
## File description:
## unitair
##

SRC_DIR		=	$(realpath ../src)

SRC_DIR_INFINADD=	$(realpath ../infinadd/src)

SRC		=	$(SRC_DIR)/check_input.c

SRC_UT_DIR	=	$(realpath .)

SRC_UT		=	$(SRC_UT_DIR)/tests_input.c

OBJ		=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS		=	-Wall -Wextra

CFLAGS		+=	-I ../include

LDFLAGS		=	-L ../lib/my/ -lmy -lcriterion -lgcov

NAME		=	units

CC		=	gcc --coverage

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ../lib/my/
		cc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
		$(MAKE) clean -C ../lib/my/
		rm -f $(OBJ)
		rm -f $(SRC_DIR)/*.g*
		rm -f $(SRC_UT_DIR)/*g*

fclean:		clean
		$(MAKE) fclean -C ../lib/my/
		rm -f $(NAME)

re:		fclean all
