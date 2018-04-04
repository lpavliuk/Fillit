/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:43:15 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:43:17 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_out(char **big, char **little, size_t len)
{
	char	*out;

	out = (char *)*big;
	while (**big == **little && **little != '\0' && **big != '\0' && len)
	{
		(*big)++;
		(*little)++;
		len--;
	}
	if (**little == '\0')
		return (out);
	else
	{
		*little = (*little) - ((*big) - out);
		*big = out;
		out = NULL;
	}
	return (out);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*out;

	out = NULL;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len)
	{
		if (*big == *little)
		{
			if ((out = ft_out((char **)&big, (char **)&little, len)))
				return (out);
		}
		len--;
		big++;
	}
	return (out);
}
