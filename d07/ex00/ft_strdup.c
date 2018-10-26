/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:49:56 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/19 16:16:37 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*point;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	point = (char*)malloc((i + 1) * sizeof(*src));
	if (point == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		point[i] = src[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}
