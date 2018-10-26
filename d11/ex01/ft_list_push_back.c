/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:19:38 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/25 22:19:39 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *p;

	p = *begin_list;
	if (p)
	{
		while (p->next)
			p = p->next;
		p->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
