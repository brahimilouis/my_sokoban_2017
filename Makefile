##
## EPITECH PROJECT, 2017
## makefile
## File description:
## ..
##

SRCS	=	src/main.c	\
		src/my_str_to_word_array.c	\
		src/recup_map.c	\
		src/cordonate_joueur.c	\
		src/prepare_deplacement.c	\
		src/my_sokoban.c	\
		src/deplacement.c	\
		src/nb_win.c	\
		src/verif_map.c	\
		src/display_h.c	\
		src/my_put_nbr.c	\
		src/my_putchar.c	\
		src/my_strlen.c	\
		src/my_putstr.c	\
		src/init_var.c	\
		src/malloc_map.c	\
		src/array.c	\
		src/verif_inside_map.c	\

OBJS	=	$(SRCS:.c=.o)

INCLUDE =	-I./includes/

CFLAGS	=	$(INCLUDE)

LIB	=	-lncurses

NAME	=	my_sokoban

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB)
		rm $(OBJS)

clean:
		rm -f $(NAME)

fclean:		clean
		rm -f $(OBJS)

re:		fclean all
