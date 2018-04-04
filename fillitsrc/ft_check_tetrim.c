/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:05:02 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:30:14 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tetrim(char *buf)
{
	int i;
	int	num;

	i = 0;
	num = 0;
	while (buf[i] != '#' && i < 21)
		i++;
	if (!(ft_check_sqr(buf, i)) && !(ft_check_r(buf, i)) &&
		!(ft_check_l(buf, i)) && !(ft_check_i(buf, i)) &&
		!(ft_check_t(buf, i)) && !(ft_check_z1(buf, i)) &&
		!(ft_check_z2(buf, i)))
		return (0);
	while (i < 21)
	{
		if (buf[i] == '#')
			num++;
		if (num > 4)
			return (0);
		i++;
	}
	return (1);
}
