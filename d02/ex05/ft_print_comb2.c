/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:21:02 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/12 15:36:12 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int g;
	int h;

	g = -1;
	h = -1;
	while (++g <= 99)
	{
		while (++h <= 99)
		{
			if (g < h)
			{
				ft_putchar(g / 10 + 48);
				ft_putchar(g % 10 + 48);
				ft_putchar(32);
				ft_putchar(h / 10 + 48);
				ft_putchar(h % 10 + 48);
				if (g != 98 || h != 99)
				{
					ft_putchar(44);
					ft_putchar(32);
				}
			}
		}
		h = -1;
	}
}
