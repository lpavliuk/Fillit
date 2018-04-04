/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:17:37 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 20:17:42 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_out(int value, int len, char **out)
{
	char	*base_array;
	int		tmp;

	tmp = len;
	base_array = "0123456789ABCDEF";
	while (tmp >= 0)
	{
		if ((*out)[tmp] == '\0' || (tmp == len && (*out)[tmp] == '\0'))
		{
			(*out)[tmp] = base_array[value];
			break ;
		}
		tmp--;
	}
}

char			*ft_itoa_base(int value, int base)
{
	char			*out;
	unsigned int	tmp;
	int				j;

	out = NULL;
	if ((value < 0 && base != 10) || (!(base >= 2 && base <= 16)))
		return (NULL);
	tmp = (value < 0) ? (-value) : value;
	j = 1;
	while ((tmp /= base) >= (unsigned int)base)
		j++;
	tmp = (value < 0) ? (-value) : value;
	if ((out = malloc(j + 1 + ((value < 0) ? 1 : 0))))
	{
		ft_bzero(out, j + ((value < 0) ? 1 : 0) + 1);
		(value < 0) ? out[0] = '-' : 1;
		while (tmp >= (unsigned int)base)
		{
			ft_out((tmp % base), (j + ((value < 0) ? 1 : 0)), &out);
			if (tmp >= (unsigned int)base)
				tmp /= base;
		}
		ft_out(tmp, (0 + ((value < 0) ? 1 : 0)), &out);
	}
	return (out);
}
