/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:38:25 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:38:27 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	size_t			count;

	source = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (source[count] == (unsigned char)c)
			return (source + count);
		count++;
	}
	return (NULL);
}
