/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 18:35:28 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/26 23:42:00 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 27000

void	ft_putstr(int fd, char *str);

void	ft_putchar(int fd, char c);

void	read_std(void)
{
	char	buf[BUF_SIZE + 1];
	int		read_return;

	while ((read_return = read(0, buf, BUF_SIZE)))
	{
		buf[read_return] = '\0';
		ft_putstr(1, buf);
	}
}

int		print_file(char *file)
{
	int		fd;
	int		read_return;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDWR);
	if (fd == -1)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, file);
		if (errno == 21)
			ft_putstr(2, ": Is a directory\n");
		else
			ft_putstr(2, ": No such file or directory\n");
		return (1);
	}
	read_return = read(fd, buf, BUF_SIZE);
	buf[read_return] = '\0';
	ft_putstr(1, buf);
	if (close(fd) == -1)
	{
		ft_putstr(2, "close() error\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		ret;
	int 	i;

	ret = 0;
	i = 0;
	if (argc == 1)
		read_std();
	while (++i < argc)
	{
		if (*argv[i] == '-' && *(argv[i] + 1) == 0)
		{
			read_std();
			continue;
		}
		if (print_file(argv[i]))
			ret = 1;
	}
	return (ret);
}
