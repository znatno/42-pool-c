/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 18:24:08 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/24 19:48:53 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int res;
	int i;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 && *s2)
		return (0);
	if (*s2)
		return ('\0' - *s2);
	else
		return (*s1 - '\0');

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*temp;

	i = 0;
	while (**tab)
	{
		if (ft_sort_wordtab(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}
