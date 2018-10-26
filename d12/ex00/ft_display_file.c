/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:56:05 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/26 19:56:14 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUTT_SIZE 4096

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
	{
		ft_putchar(fd, *str);
		str++;
	}
}

int		ft_error(int ac)
{
	if (ac == 1 || ac > 2)
	{
		if (ac == 1)
			ft_putstr(1, "File name missing.\n");
		if (ac > 2)
			ft_putstr(1, "Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUTT_SIZE + 1];

	if (ft_error(argc) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(1, "open() error\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUTT_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr(1, "close() error\n");
		return (1);
	}
	return (0);
}
