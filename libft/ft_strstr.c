/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:43:05 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:43:07 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_out(char **big, char **little)
{
	char	*out;

	out = (char *)*big;
	while (**big == **little && **little != '\0' && **big != '\0')
	{
		(*big)++;
		(*little)++;
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

char			*ft_strstr(const char *big, const char *little)
{
	char	*out;

	out = NULL;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		if (*big == *little)
		{
			if ((out = ft_out((char **)&big, (char **)&little)))
				return (out);
		}
		big++;
	}
	return (out);
}
