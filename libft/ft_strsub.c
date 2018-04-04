/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:13:39 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:13:40 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	count;

	result = NULL;
	count = 0;
	if (s)
	{
		if ((result = (char *)malloc(sizeof(char) * (len + 1))))
		{
			ft_bzero(result, (len + 1));
			while (count < len)
			{
				result[count] = s[start + count];
				count++;
			}
			result[count] = '\0';
		}
	}
	return (result);
}
