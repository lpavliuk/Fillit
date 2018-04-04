/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:38:37 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:38:39 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;
	size_t			count;

	source1 = (unsigned char *)s1;
	source2 = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (source1[count] != source2[count])
			return (source1[count] - source2[count]);
		count++;
	}
	return (0);
}
