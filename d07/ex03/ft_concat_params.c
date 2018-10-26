/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:33:40 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/19 23:04:45 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size(int argc, char **argv)
{
	int		l;
	int		i;
	int		j;

	l = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			l++;
			j++;
		}
		i++;
		l++;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat;
	int		i;
	int		j;
	int		l;
	int		k;

	i = 0;
	k = 0;
	l = size(argc, argv);
	concat = (char*)malloc(sizeof(char) * l);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			concat[k] = argv[i][j];
			j++;
			k++;
		}
		concat[k] = '\n';
		if (i == argc - 1)
			concat[k] = '\0';
		k++;
	}
	return (concat);
}
