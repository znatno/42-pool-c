/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:14:32 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/24 22:15:07 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "oprs.h"

char	checkop(char *c)
{
	int fu;

	fu = -1;
	if (c[1] == '\0')
	{
		if (c[0] == '+')
			fu = 0;
		if (c[0] == '-')
			fu = 1;
		if (c[0] == '*')
			fu = 2;
		if (c[0] == '/')
			fu = 3;
		if (c[0] == '%')
			fu = 4;
		else

		return (fu);
	}
	return (fu);
}

int calc(int a, int b, int op)
{
	int (*f[5])(int, int);

	f[0] = &f_plus;
	f[1] = &f_minus;
	f[2] = &f_mult;
	f[3] = &f_div;
	f[4] = &f_mod;
	return (f[op](a, b));
}

int main(int argc, char **argv)
{
	int a;
	int b;
	int operator;
	
	if (argc < 4 || argc > 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	operator = checkop(argv[2]);
	if (operator == -1)
		return (0);
	if (b == 0 && (operator == 4 || operator == 3))
	{
		write(1, "Stop : ", 7);
		if (operator == 4)
			write(1, "modulo by zero\n", 15);
		else if (operator == 3) 
			write(1, "division by zero\n", 17);
		return (0);
	}
	ft_putnbr(calc(a, b, operator));
	write(1, "\n", 1);
	return (0);
}
