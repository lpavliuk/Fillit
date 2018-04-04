/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:34:08 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:34:15 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*array;
	size_t			count;

	count = 0;
	array = (unsigned char *)b;
	while (count < len)
	{
		array[count] = (unsigned char)c;
		count++;
	}
	return (array);
}
