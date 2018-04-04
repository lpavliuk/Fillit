/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:12:51 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:12:53 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*result;

	len = 0;
	result = NULL;
	if (s)
	{
		len = ft_strlen(s);
		if ((result = (char *)malloc(sizeof(char) * (len + 1))))
		{
			result[len] = '\0';
			while (len)
			{
				result[len - 1] = (*f)(s[len - 1]);
				len--;
			}
		}
	}
	return (result);
}
