/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:20:03 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 20:20:04 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delarr(char **arr)
{
	size_t	count;

	count = 0;
	if (arr)
	{
		while (arr[count])
		{
			free(arr[count]);
			arr[count] = NULL;
			count++;
		}
		free(arr);
		arr = NULL;
	}
}
