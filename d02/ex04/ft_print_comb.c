/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:43:43 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/12 17:22:57 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char one;
	char two;
	char three;

	one = '0' - 1;
	while (++one <= '9')
	{
		two = one;
		while (++two <= '9')
		{
			three = two + 1;
			while (three <= '9')
			{
				ft_putchar(one);
				ft_putchar(two);
				ft_putchar(three);
				if (one != '7' || two != '8' || three != '9')
				{
					ft_putchar(44);
					ft_putchar(32);
				}
				three++;
			}
		}
	}
}
