/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:13:11 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:13:12 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	count_len;
	char	*result;

	count_len = 0;
	result = NULL;
	if (s)
	{
		count_len = ft_strlen(s);
		if ((result = (char *)malloc(sizeof(char) * (count_len + 1))))
		{
			result[count_len] = '\0';
			count_len = 0;
			while (s[count_len] != '\0')
			{
				result[count_len] = (*f)(count_len, s[count_len]);
				count_len++;
			}
		}
	}
	return (result);
}
