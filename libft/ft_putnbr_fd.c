/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:15:56 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:15:58 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	out;
	unsigned int	i;
	char			c;

	out = 0;
	i = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		out = n * -1;
	}
	else
		out = n;
	while ((out / i) >= 10)
		i *= 10;
	while (i > 0)
	{
		c = ((out / i) % 10) + '0';
		write(fd, &c, 1);
		i /= 10;
	}
}
