/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:38:04 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:38:05 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*result;
	unsigned char	*source;
	size_t			count;

	result = (unsigned char *)dst;
	source = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		result[count] = source[count];
		if (source[count] == (unsigned char)c)
			return (result += count + 1);
		count++;
	}
	return (NULL);
}
