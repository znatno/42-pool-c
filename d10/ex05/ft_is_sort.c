/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 21:28:00 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/23 22:35:49 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int c;
	int z;

	i = 0;
	c = 0;
	z = 0;
	while (*tab)
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) >= 0)
				c++;
			if (f(tab[i], tab[i + 1]) <= 0)
				z++;
			i++;
		}
		if (c == length - 1 || z == length - 1)
			return (1);
	}
	return (0);
}
