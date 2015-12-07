##
## Makefile for my printf in /home/boulat_m/rendu/Projets/CPE_2014_my_printf
## 
## Made by Mickael BOULAT
## Login   <boulat_m@epitech.net>
## 
## Started on  Mon Nov 10 09:49:01 2014 Mickael BOULAT
## Last update Mon Dec  1 11:49:37 2014 Mickael BOULAT
##

NAME	=	get_next_line
NAMELIB	=	libmy.a

SRCSLIB	=	./lib/my/my_putchar.c		\
		./lib/my/pf/my_printf.c		\
		./lib/my/pf/format-1.c		\
		./lib/my/pf/format-2.c		\
		./lib/my/pf/format-3.c		\
		./lib/my/pf/format-4.c		\
		./lib/my/pf/functions-1.c	\
		./lib/my/pf/functions-2.c	\
		./lib/my/pf/integer.c		\
		./lib/my/my_putcharc.c		\
		./lib/my/my_getstr.c		\
		./lib/my/my_getnbr.c		\
		./lib/my/my_putcharcn.c		\
		./lib/my/my_strdup.c		\
		./lib/my/my_isneg.c		\
		./lib/my/my_power_rec.c		\
		./lib/my/my_str_isalphanum.c	\
		./lib/my/my_put_nbr.c		\
		./lib/my/my_putnbr_base.c	\
		./lib/my/my_put_nbrn.c		\
		./lib/my/my_putstr.c		\
		./lib/my/my_putstrc.c		\
		./lib/my/my_putstrcn.c		\
		./lib/my/my_putstrn.c		\
		./lib/my/my_putstrr.c		\
		./lib/my/my_revstr.c		\
		./lib/my/my_sort_int_tab.c	\
		./lib/my/my_square_root.c	\
		./lib/my/my_strcapitalize.c	\
		./lib/my/my_strcat.c		\
		./lib/my/my_strcmp.c		\
		./lib/my/my_strcpy.c		\
		./lib/my/my_str_isalpha.c	\
		./lib/my/my_str_islower.c	\
		./lib/my/my_str_isnum.c		\
		./lib/my/my_str_isprintable.c	\
		./lib/my/my_str_isupper.c	\
		./lib/my/my_strlen.c		\
		./lib/my/my_strlowcase.c	\
		./lib/my/my_strncat.c		\
		./lib/my/my_strncmp.c		\
		./lib/my/my_strncpy.c		\
		./lib/my/my_strstr.c		\
		./lib/my/my_strupcase.c		\
		./lib/my/my_swap.c

SRC	=	./src/main.c			\
		./src/get_next_line.c		\
		./src/parsing.c			\
		./src/my_split.c		\
		./src/get_varcontent.c		\
		./src/list_utils.c

OBJ	=	$(SRC:.c=.o)
OBJLIB	=	$(SRCSLIB:.c=.o)

INCLUDE	=	-I ./include/
LIB	=	-L ./lib/ -lmy

CFLAGS	+=	-W -Wall -pedantic
CFLAGS	+=	$(INCLUDE) $(LIB)

RM	=	rm -f
CC	=	gcc


all	:	$(NAME)

lib	:	$(OBJLIB)
		ar rc $(NAMELIB) $(OBJLIB)
		ranlib $(NAMELIB)
		mv $(NAMELIB) ./lib/

$(NAME)	:	$(OBJ) lib
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean	:	
		$(RM) $(OBJ)
		$(RM) $(OBJLIB)

fclean	:	clean
		$(RM) $(NAME)
		$(RM) ./lib/$(NAMELIB)

re	:	fclean all
