/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:34:22 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:34:24 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*result;
	size_t			count;

	count = 0;
	result = (unsigned char *)s;
	if (n > 0)
		while (count < n)
		{
			result[count] = '\0';
			count++;
		}
}
