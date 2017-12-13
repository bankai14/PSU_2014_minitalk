##
## Makefile for  in /home/zitouni/rendu/haha
## 
## Made by Yassine Zitouni
## Login   <zitoun_y@epitech.net>
## 
## Started on  Fri Jan 16 16:53:07 2015 Yassine Zitouni
## Last update Sun Mar 22 20:19:02 2015 Yassine Zitouni
##

CC	=	gcc

RM	=	rm -f

CFLAGS +=	-I./include

NAME	=	server/server

NAME2	=	client/client

SRCS	=	server/serveur.c	\
		server/write.c		\

SRCS2	=	client/client.c		\
		client/strcmp.c		\
		client/getnbr.c		\
		client/get_next_line.c	\
		client/my_cstrlen.c	\
		client/write.c		\

OBJS	=	$(SRCS:.c=.o)

OBJS2	=	$(SRCS2:.c=.o)

all:		$(NAME) $(NAME2)

$(NAME):	$(OBJS)
		$(CC) -g $(OBJS) -o $(NAME)

$(NAME2):	$(OBJS2)
		$(CC) $(OBJS2) -o $(NAME2)

clean:
		$(RM) $(OBJS) $(OBJS2)

fclean:		clean
		$(RM) $(NAME) $(NAME2)

re:	fclean all

ice_tee :	fclean all
		$(RM) *~ *#

.PHONY:		all clean fclean re
