##
## Makefile for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris
##
## Made by remy
## Login   <remy@epitech.net>
##
## Started on  Tue Feb 21 15:06:41 2017 remy
## Last update Tue Feb 28 12:17:45 2017 jack
##

CC	=	gcc

SRC	=	srcs/

SRCS	=	$(SRC)main.c \
		$(SRC)ll.c \
		$(SRC)get_tetriminos.c \
		$(SRC)my_strlen.c \
		$(SRC)my_strdup.c \
		$(SRC)extension.c \
		$(SRC)concat.c \
		$(SRC)rotate.c \
		$(SRC)reverse.c \
		$(SRC)tab_utils.c \
		$(SRC)errors.c \

OBJS	=	$(SRCS:.c=.o)

NAME	=	tetris

CFLAGS	=	-I./include/

# flags cancer CFLAGS	+=	-W -Wall -Wextra

LDFLAGS =	-L./lib/my_gnl/ -lmy_gnl

LDFLAGS +=      -L./lib/my_printf/ -lmy_printf

DEBUG	?=	1;

ifeq	($(DEBUG), 1)
	CFLAGS	+=	-g3
else
	CFLAGS	+=	-O2
endif

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C lib/my_gnl/ all
	make -C lib/my_printf/ all
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	make -C lib/my_gnl/ clean
	make -C lib/my_printf/ clean
	rm -f $(OBJS)

fclean:	clean
	make -C lib/my_gnl/ fclean
	make -C lib/my_printf/ fclean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re debug
