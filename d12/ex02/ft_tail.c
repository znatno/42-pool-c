/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 23:36:23 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/26 23:39:21 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE 4096

void	ft_print(char *b, int i);

int		ft_atoi(char *str)
{
	int n;
	int i;

	n = 0;
	i = 0;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		n = (n * 10) + (*(str + i) - '0');
		i++;
	}
	if (*(str + 0) == '-')
		n = n * -1;
	return (n);
}

int		ft_bfile(char *fn, char *b)
{
	int		fo;
	int		fr;

	fo = open(fn, O_RDONLY);
	if (fo == -1)
	{
		write(1, "Open error\n", 11);
		return (1);
	}
	fr = read(fo, b, SIZE);
	b[fr] = '\0';
	if (close(fo) == -1)
	{
		write(1, "Close error\n", 12);
		return (1);
	}
	return (0);
}

int		ft_len(char *b)
{
	int i;

	i = 0;
	while (b[i])
		i++;
	return (i);
}

int		ft_n(char *b, int l)
{
	int n;

	n = 0;
	while (l >= 0)
	{
		if (b[l] == '\n')
			n++;
		if (n == 10)
			return (l);
		l--;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	b[SIZE];
	int		l;
	int		c;

	l = 0;
	if (argc == 1)
		write(1, "File name missing.\n", 18);
	else if (argc == 4 && argv[1][0] == '-' && argv[1][1] == 'c')
	{
		ft_bfile(argv[3], b);
		l = ft_len(b);
		c = ft_atoi(argv[2]);
		l = l - c;
		ft_print(b, l);
	}
	else if (argc == 2)
	{
		ft_bfile(argv[1], b);
		l = ft_len(b);
		c = ft_n(b, l);
		ft_print(b, c);
	}
	else
		write(1, "Wrong arguments\n", 16);
	return (0);
}
