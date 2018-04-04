/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:41:37 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:41:38 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_count;
	size_t	src_count;
	size_t	out;

	dst_count = 0;
	src_count = 0;
	dst_count = ft_strlen(dst);
	out = ((dstsize > dst_count) ? dst_count : dstsize) + ft_strlen(src);
	while (src[src_count] != '\0' && dst_count < (dstsize - 1) && dstsize)
	{
		dst[dst_count] = src[src_count];
		dst_count++;
		src_count++;
	}
	dst[dst_count] = '\0';
	return (out);
}
