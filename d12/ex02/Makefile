# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 16:35:53 by ibohun            #+#    #+#              #
#    Updated: 2018/07/26 23:39:58 by ibohun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRC = ft_tail.c \
	  ft_print.c
all:
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean: 
	/bin/rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
