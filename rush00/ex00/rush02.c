/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 19:23:21 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/15 20:04:45 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		print(int x, char c1, char c2)
{
	int w;

	w = 1;
	while (w <= x)
	{
		if (w == 1 || w == x)
			ft_putchar(c1);
		else
			ft_putchar(c2);
		w++;
	}
	ft_putchar(10);
	return (0);
}

int		rush02(int x, int y)
{
	int h;

	h = 1;
	while (h <= y)
	{
		if (h == 1)
			print(x, 'A', 'B');
		else if (h == y)
			print(x, 'C', 'B');
		else
			print(x, 'B', ' ');
		h++;
	}
	return (0);
}
