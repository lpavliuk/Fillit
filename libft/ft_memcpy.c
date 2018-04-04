/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:34:39 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:34:41 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *result;
	unsigned char *source;

	result = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n--)
		result[n] = source[n];
	return (result);
}
