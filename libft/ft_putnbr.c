/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:15:16 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:15:18 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	out;
	unsigned int	i;
	char			c;

	out = n;
	i = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		out = n * -1;
	}
	while ((out / i) >= 10)
		i *= 10;
	while (i > 0)
	{
		c = ((out / i) % 10) + '0';
		write(1, &c, 1);
		i /= 10;
	}
}
