/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:18:36 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 20:18:39 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_last(t_list *lst)
{
	t_list	*list;

	list = lst;
	while (list)
	{
		if (!(list->next))
			return (list);
		list = list->next;
	}
	return (list);
}
