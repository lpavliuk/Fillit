/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:17:38 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:17:40 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (alst && *alst)
	{
		list = *alst;
		while (list)
		{
			if (list->content && (*del))
				(*del)(list->content, list->content_size);
			free(list);
			list = list->next;
		}
		*alst = NULL;
	}
}
