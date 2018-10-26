/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:33:48 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:33:49 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	**ft_createm(int row, int col, int size)
{
	char	**m;
	int		i;

	i = 0;
	if ((m = (char**)malloc(sizeof(char*) * size * row)) == NULL)
		return (0);
	else
	{
		while (i < row)
		{
			m[i] = (char*)malloc(sizeof(char) * size * col);
			i++;
		}
	}
	return (m);
}
