/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:17:31 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:21:28 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (alst)
	{
		list = *alst;
		if (list)
		{
			if (list->content && (*del))
				(*del)(list->content, list->content_size);
			free(list);
			*alst = NULL;
		}
	}
}
