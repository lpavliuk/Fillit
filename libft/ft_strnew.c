/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:11:22 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:11:24 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*allctd;

	allctd = NULL;
	if ((allctd = (char *)malloc(size + 1)))
		ft_bzero(allctd, size + 1);
	return ((char *)allctd);
}
