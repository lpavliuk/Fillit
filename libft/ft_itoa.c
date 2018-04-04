/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:14:17 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:14:19 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_out(char *result, int len, int n)
{
	unsigned int out;

	out = n;
	if (n < 0)
	{
		result[0] = '-';
		out = -n;
	}
	result[len + ((n < 0) ? 1 : 0)] = '\0';
	while (len > 0)
	{
		result[(len--) + ((n < 0) ? 1 : 0) - 1] = (out % 10) + '0';
		out = out / 10;
	}
}

char			*ft_itoa(int n)
{
	char			*result;
	int				len;
	int				i;
	unsigned int	out;

	len = 1;
	i = 1;
	result = NULL;
	if (n < 0)
		out = -n;
	else
		out = n;
	while ((out / i) >= 10)
	{
		len++;
		i *= 10;
	}
	if ((result = (char *)malloc(sizeof(char) * (len + ((n < 0) ? 1 : 0) + 1))))
		ft_out(result, len, n);
	return (result);
}
