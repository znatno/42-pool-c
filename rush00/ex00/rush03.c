/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 19:09:53 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/15 20:13:06 by ibohun           ###   ########.fr       */
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

int		rush03(int x, int y)
{
	int h;

	h = 1;
	while (h <= y)
	{
		if (h == 1 || h == y)
			print(x, 'A', 'B', 'C');
		else
			print(x, 'B', ' ', 'B');
		h++;
	}
	return (0);
}
