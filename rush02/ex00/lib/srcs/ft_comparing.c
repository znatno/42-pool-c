/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comparing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:34:08 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:34:09 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_comparing(char **str, char **dst, int row, int col)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < row)
	{
		j = 0;
		while (j < col && str[i][j] != '\0' && dst[i][j] != '\0')
		{
			if (str[i][j] == dst[i][j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
