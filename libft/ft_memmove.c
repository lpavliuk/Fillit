/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:38:15 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:38:18 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*result;
	unsigned char	*source;
	size_t			count;

	result = (unsigned char *)dst;
	source = (unsigned char *)src;
	count = 0;
	while (count < len)
	{
		if (dst > src)
			result[len - count - 1] = source[len - count - 1];
		else
			result[count] = source[count];
		count++;
	}
	return (result);
}
