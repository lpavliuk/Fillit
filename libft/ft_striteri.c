/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:12:26 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:12:59 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	char	*src;

	i = 0;
	src = s;
	if (s && (*f))
	{
		while (s[i] != '\0')
		{
			(*f)(i, src);
			i++;
			src++;
		}
	}
}
