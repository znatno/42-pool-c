/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 23:13:03 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/20 23:15:57 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

void	cpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (space(str[i]))
			i++;
		if (!str[i])
			break ;
		words++;
		while (str[i] && !space(str[i]))
			i++;
	}
	return (words);
}

int		cut_words(char *str, int words, char **r)
{
	int		c;
	int		start;
	int		end;

	c = 0;
	start = 0;
	while (c < words && str[start])
	{
		while (space(str[start]))
			start++;
		end = start;
		while (str[end] && !space(str[end]))
			end++;
		if (!(r[c] = (char *)malloc(end - start + 1)))
			return (0);
		cpy(r[c], str + start, end - start);
		start = end + 1;
		c++;
	}
	return (1);
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**r;

	words = count_words(str);
	if (!words)
	{
		if (!(r = (char **)malloc(sizeof(*r))))
			return (NULL);
		r[0] = NULL;
		return (r);
	}
	if (!(r = (char **)malloc((words + 1) * sizeof(*r))))
		return (NULL);
	if (!cut_words(str, words, r))
		return (NULL);
	r[words] = 0;
	return (r);
}
