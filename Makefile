##                                                                                                   
## Makefile for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                                 
##                                                                                                   
## Made by bourge_v                                                                                  
## Login   <bourge_v@epitech.net>                                                                    
##                                                                                                   
## Started on  Sun Nov 17 23:31:24 2013 bourge_v                                                     
## Last update Sun Mar  9 06:13:52 2014 bourge_v                                                     
##                                                                                                   

CC      = cc

RM      = rm -rf

NAME    = my_printf

SRC     = fct1.c \
          fct2.c \
          fct3.c \
          fct_l.c \
          my_printf.c \
          fill_tab.c \
          run.c \
          my_putnbr_base.c \
          my_putunbr_base.c \
          my_put_lnbr.c \
          my_putlnbr_base.c \
          my_basicfct.c \
          main.c

HEAD    = my.h

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
        $(CC) -o $(NAME) $(SRC) $(HEAD)
        ar r libmy.a $(OBJ)
        ranlib libmy.a

clean:
        $(RM) $(OBJ)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
