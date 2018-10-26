# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 17:10:23 by ibohun            #+#    #+#              #
#    Updated: 2018/07/24 17:10:35 by ibohun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/nmain.c \
	 srcs/oprs.c 

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: all clean fclean

.PHONY: all clean fclean re
