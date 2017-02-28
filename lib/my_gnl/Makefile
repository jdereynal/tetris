##
## Makefile for gnl in /home/remy.machado/libraries/lib/gnl
## 
## Made by remy machado
## Login   <remy.machado@epitech.net>
## 
## Started on  Tue Jan 31 18:54:00 2017 remy machado
## Last update Tue Feb 28 10:31:28 2017 jack
##

AR_RC	=	ar rc

SRCS	=	get_next_line.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	libmy_gnl.a

CFLAGS	=	-I../../include

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR_RC) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
