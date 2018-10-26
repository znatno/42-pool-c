/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozii <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 23:32:25 by dkozii            #+#    #+#             */
/*   Updated: 2018/07/29 23:32:28 by dkozii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

# define IN_SIZE 520168

int		g_size;
int		g_rc;
int		g_cc;

int		c_col(char *str);
int		c_row(char *str);

int		ft_valid(char *str);
char	*new_str(char *str, int size, int i);
char	*ft_read(void);

char	**ft_createm(int row, int col, int size);
char	**ft_insertm(char *str, int row, int col, int size);

void	ft_result(char **str, int row, int col);
int		ft_comparing(char **str, char **dst, int row, int col);

char	**get_rush00(void);
char	**get_rush01(void);
char	**get_rush02(void);
char	**get_rush03(void);
char	**get_rush04(void);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
#endif
