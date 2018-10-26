/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:59:44 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/14 22:00:14 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int number;
	int i;

	number = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 0)
	{
		i++;
		while (i < power)
		{
			number *= nb;
			i++;
		}
		return (number);
	}
	return (0);
}
