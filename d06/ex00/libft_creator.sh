# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 14:02:46 by ibohun            #+#    #+#              #
#    Updated: 2018/07/18 23:11:43 by ibohun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o
ranlib libft.a
rm -rf *.o
