/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:26:50 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/25 22:26:52 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*p;
	unsigned int	count;

	count = 1;
	p = begin_list;
	if (p)
	{
		while (count <= nbr)
		{
			if (!p)
				return (0);
			if (i < nbr)
				p = p->next;
			count++;
		}
	}
	return (p);
}
