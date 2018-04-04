/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:41:45 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:41:52 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *out;

	out = (char *)s;
	while (*out != '\0')
	{
		if (*out == (char)c)
			return (out);
		out++;
	}
	if (*out == '\0' && (char)c == '\0')
		return (out);
	return (NULL);
}
