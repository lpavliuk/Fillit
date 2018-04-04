/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:42:54 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:08:56 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *out;

	out = NULL;
	if (*s == '\0' && c == '\0')
		out = (char *)s;
	while (*s != '\0')
	{
		if (*s == (char)c)
			out = (char *)s;
		s++;
	}
	if (*s == '\0' && c == '\0')
		out = (char *)s;
	return (out);
}
