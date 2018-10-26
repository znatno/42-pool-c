/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:09:10 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/17 16:28:14 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*find;

	while (*str)
	{
		start = str;
		find = to_find;
		while (*str == *find && *str != '\0')
		{
			str++;
			find++;
		}
		if (!*find)
			return (start);
		str++;
	}
	return (0);
}
