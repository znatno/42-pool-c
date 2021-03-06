/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:20:41 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/25 22:20:42 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	ft_list *p;

	i = 0;
	p = begin_list;
	while (p->next)
	{
		p = p->next;
		i++;
	}
	return (i);
}
