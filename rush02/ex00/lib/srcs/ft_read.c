/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:34:19 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:34:21 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*new_str(char *str, int size, int i)
{
	char	*new;
	int		j;

	j = 0;
	new = (char*)malloc(sizeof(char) * size);
	while (j < i)
	{
		new[j] = str[j];
		j++;
	}
	return (new);
}

char	*ft_read(void)
{
	char	*str;
	char	tmp;
	int		i;
	int		size;

	i = 0;
	size = IN_SIZE;
	str = (char*)malloc(sizeof(char) * size);
	while (read(0, &tmp, 1))
	{
		if (i >= size)
		{
			size *= 2;
			str = new_str(str, size, i);
		}
		str[i++] = tmp;
	}
	str[i++] = '\0';
	g_size = size;
	return (str);
}
