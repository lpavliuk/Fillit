/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:04:10 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:04:12 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_dots(char *arr, int size)
{
	while (size)
	{
		*arr = '.';
		arr++;
		size--;
	}
	*arr = '.';
}

char			**ft_array(int size)
{
	int		i;
	char	**result;

	i = 0;
	result = NULL;
	if ((result = (char **)ft_memalloc(sizeof(char *) * (size + 1))))
	{
		ft_bzero(result, (size + 1));
		while (i < size)
		{
			if (!(result[i] = (char *)ft_memalloc(sizeof(char) * (size + 1))))
				ft_delarr(result);
			ft_bzero(result[i], (size + 1));
			ft_dots(result[i], (size - 1));
			i++;
		}
	}
	return (result);
}
