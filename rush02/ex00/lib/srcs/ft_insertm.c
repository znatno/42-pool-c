/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:33:57 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:33:59 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	**ft_insertm(char *str, int row, int col, int size)
{
	char	**m;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	m = ft_createm(row, col, size);
	while (str[k] != '\0')
	{
		if (str[k] == '\n')
		{
			m[i][j] = '\0';
			i++;
			j = 0;
		}
		else
		{
			m[i][j] = str[k];
			j++;
		}
		k++;
	}
	return (m);
}
