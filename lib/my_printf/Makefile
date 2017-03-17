##
## Makefile for printf_bootstrap in /home/remy.machado/PSU_2016_my_printf_bootstrap
##
## Made by remy machado
## Login   <remy.machado@epitech.net>
##
## Started on  Wed Nov  9 18:04:12 2016 remy machado
## Last update Thu Mar 16 14:51:48 2017 jack
##

CC	= 	gcc

ar_rc	=	ar rc

SRCSP     =	identify_mod.c     \
                format_leftj2.c    \
                format_leftj.c     \
                format_mod2.c      \
                format_mod.c       \
                format_sharp.c     \
                format_zero2.c     \
                format_zero.c      \
                my_char_isalpha.c  \
                my_char_isalphanum.c       \
                my_char_isnum.c    \
                my_getnbr_base.c   \
                my_getnbr.c        \
                my_init_printf2.c  \
                my_init_printf.c   \
                my_nbr_isneg_ap.c  \
                my_nbrlen.c        \
                my_power_it.c      \
                my_putchar_ap.c    \
                my_putchar_mod.c   \
                my_putmod_ap.c     \
                my_putnbr_ap.c     \
                my_putnbr_base_b.c \
                my_putnbr_base_o.c \
                my_putnbr_base_p.c \
                my_putnbr_base_x.c \
                my_putnbr_base_X.c \
                my_putstr_ap.c     \
                my_strcpy.c        \
                my_strlen_alphanum.c       \
                my_strlen_num.c    \
                my_zero_isfirst.c  \
                my_putnbr.c        \
                my_putchar.c       \
                my_putnbr_base.c   \
                my_putstr.c        \
                my_strlen.c        \
                my_printf.c        \
                my_printf_core.c   \
                my_showstr_octal.c \
                my_showstr.c

OBJS	=	$(SRCSP:.c=.o)

NAME	=	libmy_printf.a

CFLAGS	=	-I../../include

all:	$(NAME)

$(NAME):	$(OBJS)
	$(ar_rc) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
