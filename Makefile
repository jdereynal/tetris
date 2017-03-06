##
## Makefile for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris
##
## Made by remy
## Login   <remy@epitech.net>
##
## Started on  Tue Feb 21 15:06:41 2017 remy
## Last update Mon Mar  6 18:17:17 2017 jack
##

CC	=	gcc

SRC	=	srcs/

SRCS	=	$(SRC)check_args.c		\
		$(SRC)concat.c			\
		$(SRC)errors.c			\
		$(SRC)extension.c		\
		$(SRC)get_tetriminos.c		\
		$(SRC)game_init.c		\
		$(SRC)help_flag.c		\
		$(SRC)is_help_flag.c		\
		$(SRC)key_init.c		\
		$(SRC)launch_opt.c		\
		$(SRC)ll.c			\
		$(SRC)main.c			\
		$(SRC)my_strcmp.c		\
		$(SRC)my_strdup.c		\
		$(SRC)my_strlen.c		\
		$(SRC)my_strncmp.c		\
		$(SRC)print_tetriminos.c	\
		$(SRC)print_keys.c		\
		$(SRC)print_game.c		\
		$(SRC)reverse.c			\
		$(SRC)rotate.c			\
		$(SRC)sort_list.c		\
		$(SRC)str_to_wordtab.c		\
		$(SRC)tab_utils.c		\
		$(SRC)normalize_shape.c		\

OBJS	=	$(SRCS:.c=.o)

NAME	=	tetris

CFLAGS	=	-I./include/ -lncurses

# flags cancer CFLAGS	+=	-W -Wall -Wextra

LDFLAGS =	-L./lib/gnl/ -lgnl
LDFLAGS +=      -L./lib/my_printf/ -lmy_printf -lncurses

DEBUG	?=	1;

ifeq	($(DEBUG), 1)
	CFLAGS	+=	-g3
else
	CFLAGS	+=	-O2
endif

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C lib/my_printf/ all
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS) $(CFLAGS)

clean:
	make -C lib/my_printf/ clean
	rm -f $(OBJS)

fclean:	clean
	make -C lib/my_printf/ fclean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re debug
