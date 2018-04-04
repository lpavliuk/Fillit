/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:13:49 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:13:50 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	count;

	result = NULL;
	count = 0;
	if (s1 && s2)
	{
		if ((result = (char *)malloc(sizeof(char) *
			(ft_strlen(s1) + ft_strlen(s2) + 1))))
		{
			while (*s1 != '\0' || *s2 != '\0')
			{
				if (*s1 == '\0')
					result[count] = *s2;
				else
					result[count] = *s1;
				(*s1 == '\0') ? (s2++) : (s1++);
				count++;
			}
			result[count] = '\0';
		}
	}
	return (result);
}
