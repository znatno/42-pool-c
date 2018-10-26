# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkozii <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/29 23:32:04 by dkozii            #+#    #+#              #
#    Updated: 2018/07/29 23:37:03 by dkozii           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

LIBLFT = lib/libft.a
LIBDIR = lib/includes
LIBSRC = lib/srcs/ft_putchar.c \
		 lib/srcs/ft_putnbr.c \
		 lib/srcs/ft_putstr.c \
		 lib/srcs/ft_arr.c \
		 lib/srcs/ft_comparing.c \
		 lib/srcs/ft_createm.c \
		 lib/srcs/ft_insertm.c \
		 lib/srcs/ft_valid.c \
		 lib/srcs/ft_result.c \
		 lib/srcs/ft_read.c \
		 lib/srcs/get_rush00.c \
		 lib/srcs/get_rush01.c \
		 lib/srcs/get_rush02.c \
		 lib/srcs/get_rush03.c \
		 lib/srcs/get_rush04.c
LIBOBJ = ft_putchar.o \
		 ft_putnbr.o \
		 ft_putstr.o \
		 ft_arr.o \
		 ft_comparing.o \
		 ft_createm.o \
		 ft_insertm.o \
		 ft_valid.o \
		 ft_result.o \
		 ft_read.o \
		 get_rush00.o \
		 get_rush01.o \
		 get_rush02.o \
		 get_rush03.o \
		 get_rush04.o

all: lib main

lib:
	@gcc $(FLAGS) -I$(LIBDIR) -c $(LIBSRC)
	@ar rc $(LIBLFT) $(LIBOBJ)
	@ranlib $(LIBLFT)

main:
	@gcc $(CFLAGS) lib/srcs/main.c -o colle-2 -Llib -lft

run00:
	@./colle-00 3 3 | ./colle-2
run01:
	@./colle-01 1 3 | ./colle-2
run02:
	@./colle-02 5 1 | ./colle-2
run03:
	@./colle-03 4 2 | ./colle-2
run04:
	@./colle-04 5 9 | ./colle-2
runPT:
	@./colle-00 500 500
runES:
	@./colle-00 150 150 | ./colle-2
runHR:
	@./colle-00 1000 1000 | ./colle-2

clean:
	@rm -rf $(LIBOBJ)

fclean: clean
	@rm -rf colle-2
	@rm -rf lib/libft.a

re: fclean all

.PHONY: all lib main \
	run00 run01 run02 run03 run04 runES runHR runPT \
	clean fclean re
