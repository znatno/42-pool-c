/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:26:28 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/25 22:43:02 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tfree;
	t_list *cur;

	cur = *begin_list;
	while (cur)
	{
		tfree = cur;
		cur = cur->next;
		free(tfree);
	}
	cur = NULL;
}
