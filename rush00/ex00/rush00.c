/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 19:35:52 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/15 20:46:34 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		rush00(int x, int y)
{
	int w;
	int h;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			if ((w < x && w > 1) && (h > 1 && h < y))
				ft_putchar(' ');
			else if ((w > 1 && w < x) && (h == 1 || h == y))
				ft_putchar('-');
			else if ((h > 1 && h < y) && (w == 1 || w == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			w++;
		}
		ft_putchar(10);
		h++;
	}
	return (0);
}
