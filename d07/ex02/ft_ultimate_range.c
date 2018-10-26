/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:09:12 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/19 16:32:37 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *r;
	int i;
	int ln;

	i = 0;
	ln = max - min;
	if (min >= max)
		return (0);
	r = (int*)malloc((ln + 1) * sizeof(*r));
	while (i < ln)
	{
		r[i] = min + i;
		i++;
	}
	return (r);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	return (max - min);
}
