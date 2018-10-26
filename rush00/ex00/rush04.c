/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:36:19 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/15 19:38:21 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		print(int x, char c1, char c2, char c3)
{
	int w;

	w = 1;
	while (w <= x)
	{
		if (w == 1)
			ft_putchar(c1);
		else if (w == x)
			ft_putchar(c3);
		else
			ft_putchar(c2);
		w++;
	}
	ft_putchar(10);
	return (0);
}

int		rush04(int x, int y)
{
	int h;

	h = 1;
	while (h <= y)
	{
		if (h == 1)
			print(x, 'A', 'B', 'C');
		else if (h == y)
			print(x, 'C', 'B', 'A');
		else
			print(x, 'B', ' ', 'B');
		h++;
	}
	return (0);
}
