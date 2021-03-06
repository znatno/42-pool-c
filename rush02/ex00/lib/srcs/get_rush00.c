/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rush00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:35:45 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:35:46 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	print_in_array00(int c, int r, char **result)
{
	if ((r == 1 && c == 1) || (r == 1 && c == g_cc))
		result[r - 1][c - 1] = 'o';
	if ((r == g_rc && c == 1 && r != 1) || (r == g_rc && c == g_cc && r != 1))
		result[r - 1][c - 1] = 'o';
	if (c > 1 && c < g_cc && r > 1 && r < g_rc)
		result[r - 1][c - 1] = ' ';
	if ((r == 1 && c > 1 && c < g_cc) || (r == g_rc && c > 1 && c < g_cc))
		result[r - 1][c - 1] = '-';
	if ((c == 1 && r < g_rc && r > 1) || (c == g_cc && r > 1 && r < g_rc))
		result[r - 1][c - 1] = '|';
	if (r <= g_rc && c == g_cc)
		result[r - 1][c] = '\0';
}

char	**get_rush00(void)
{
	char	**result;
	int		r;
	int		c;

	result = ft_createm(g_rc, g_cc + 1, g_size);
	c = 1;
	r = 1;
	if (g_rc > 0 && g_cc > 0)
	{
		while (r <= g_rc)
		{
			while (c <= g_cc)
			{
				print_in_array00(c, r, result);
				c++;
			}
			c = 1;
			r++;
		}
	}
	return (result);
}
