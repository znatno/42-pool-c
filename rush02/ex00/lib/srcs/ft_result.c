/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:34:57 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:34:58 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	print(int x, int i)
{
	if (i > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(g_rc);
	ft_putstr("] [");
	ft_putnbr(g_cc);
	ft_putstr("]");
}

void	ft_result(char **str, int row, int col)
{
	int i;
	int p;

	i = 0;
	p = 0;
	if ((p = ft_comparing(str, get_rush00(), row, col) == 1))
		print(0, i++);
	if ((p = ft_comparing(str, get_rush01(), row, col) == 1))
		print(1, i++);
	if ((p = ft_comparing(str, get_rush02(), row, col) == 1))
		print(2, i++);
	if ((p = ft_comparing(str, get_rush03(), row, col) == 1))
		print(3, i++);
	if ((p = ft_comparing(str, get_rush04(), row, col) == 1))
		print(4, i++);
	if (i == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
