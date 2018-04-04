/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:10:58 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:11:02 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*allctd;
	size_t	counter;

	allctd = NULL;
	if (size)
	{
		if ((allctd = malloc(size)))
		{
			counter = 0;
			while (counter != size)
			{
				allctd[counter] = 0;
				counter++;
			}
		}
	}
	return ((void *)allctd);
}
