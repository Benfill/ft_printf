# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenfill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 22:30:24 by abenfill          #+#    #+#              #
#    Updated: 2022/11/15 22:30:27 by abenfill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putadress.c \
			ft_unsigned.c ft_print_lowhex.c ft_print_upphex.c

OBJS	= $(SRC:.c=.o)

RM		= @rm -f

FLAGS	= -Wall -Wextra -Werror 

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			Fclean $(NAME)
