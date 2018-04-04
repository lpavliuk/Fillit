/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:40:36 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/26 21:40:37 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	i;

	i = 0;
	dup_str = NULL;
	i = ft_strlen(s);
	if ((dup_str = (char *)ft_memalloc(i + 1)))
	{
		i = -1;
		while (s[++i] != '\0')
			dup_str[i] = s[i];
		dup_str[i] = '\0';
	}
	return (dup_str);
}
