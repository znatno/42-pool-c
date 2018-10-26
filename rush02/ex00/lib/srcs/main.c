/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 23:47:41 by ibohun            #+#    #+#             */
/*   Updated: 2018/07/29 22:35:20 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(void)
{
	char	*str;
	char	**m;

	str = ft_read();
	if (!ft_valid(str))
		return (0);
	g_rc = c_row(str);
	g_cc = c_col(str);
	if (g_rc < 1 || g_cc < 1)
		return (0);
	m = ft_insertm(str, g_rc, g_cc, g_size);
	free(str);
	ft_result(m, g_rc, g_cc);
	free(m);
	return (0);
}
