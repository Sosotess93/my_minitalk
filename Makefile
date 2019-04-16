##
## Makefile for Makefile in /home/charra_s/PSU_2014_minitalk
## 
## Made by Sofiane Charrad
## Login   <charra_s@epitech.net>
## 
## Started on  Thu Mar  5 23:26:34 2015 Sofiane Charrad
## Last update Tue Apr 16 14:01:48 2019 sofiane
##

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-w

SRC	=	client/client.c \
		client/my_write_client.c

SRC1	=	server/affiche.c \
		server/my_put_nbr.c \
		server/server.c \
		client/my_write_client.c

NAME	=	client

NAME1	=	server

OBJ	=	$(SRC:.c=.o)

OBJ1	=	$(SRC1:.c=.o)

all:		$(NAME) $(NAME1)

$(NAME):	$(OBJ)
		$(CC) -o ./client/$(NAME) $(OBJ) $(CFLAGS)

$(NAME1):	$(OBJ1)
		$(CC) -o ./server/$(NAME1) $(OBJ1) $(CFLAGS)

clean:
		$(RM) $(OBJ) $(OBJ1)

fclean:		clean
		$(RM) $(NAME) $(NAME1)

re:		fclean all

.PHONY:		all clean fclean re
