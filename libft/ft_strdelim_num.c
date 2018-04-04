/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_strings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:22:47 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:23:08 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strdelim_num(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			if (s[i] != c)
			{
				while (s[i] != c && s[i] != '\0')
					i++;
				j++;
				continue ;
			}
			i++;
		}
	}
	return (j);
}
