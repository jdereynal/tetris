##
## Makefile for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris
##
## Made by remy
## Login   <remy@epitech.net>
##
## Started on  Tue Feb 21 15:06:41 2017 remy
##

CC	=	gcc

SRC	=	srcs/

SRCS	=	$(SRC)add_shape.c		\
		$(SRC)can_shape_move.c		\
		$(SRC)change_keys.c		\
		$(SRC)change_settings.c		\
		$(SRC)check_args.c		\
		$(SRC)check_final_binding.c	\
		$(SRC)compare.c			\
		$(SRC)concat.c			\
		$(SRC)colors.c			\
		$(SRC)debug_flag.c		\
		$(SRC)display.c			\
		$(SRC)errors.c			\
		$(SRC)extension.c		\
		$(SRC)get_tetriminos.c		\
		$(SRC)game_init.c		\
		$(SRC)handle_read.c		\
		$(SRC)help_flag.c		\
		$(SRC)is_debug_flag.c		\
		$(SRC)is_help_flag.c		\
		$(SRC)init_game_board.c		\
		$(SRC)key_init.c		\
		$(SRC)key_transactions.c	\
		$(SRC)launch_opt.c		\
		$(SRC)ll.c			\
		$(SRC)main.c			\
		$(SRC)moving_shape.c		\
		$(SRC)move_shape.c		\
		$(SRC)my_str_isnum.c		\
		$(SRC)my_strcmp.c		\
		$(SRC)my_strcmp_no_bz.c		\
		$(SRC)my_strdup.c		\
		$(SRC)my_strlen.c		\
		$(SRC)my_strncmp.c		\
		$(SRC)normalize_shape.c		\
		$(SRC)prepare_read.c		\
		$(SRC)print_char.c		\
		$(SRC)print_tetriminos.c	\
		$(SRC)print_keys.c		\
		$(SRC)print_game.c		\
		$(SRC)quit.c			\
		$(SRC)remove_lines.c		\
		$(SRC)reverse.c			\
		$(SRC)rotate.c			\
		$(SRC)shape_to_int.c		\
		$(SRC)sort_list.c		\
		$(SRC)str_to_wordtab.c		\
		$(SRC)tab_utils.c		\
		$(SRC)update_board.c		\

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
