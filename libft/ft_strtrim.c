/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:13:56 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/30 15:54:12 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*result;

	i = 0;
	result = NULL;
	if (s)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		if ((i = ft_strlen(s)))
			while (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
				i--;
		if ((result = (char *)malloc(sizeof(char) * (i + 1))))
		{
			result[i] = '\0';
			while (i != 0)
			{
				result[i - 1] = s[i - 1];
				i--;
			}
		}
	}
	return (result);
}
