/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:05:17 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:05:21 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_lst	*ft_end_lst(t_lst *lst)
{
	t_lst	*list;

	list = lst;
	while (list)
	{
		if (!(list->next))
			return (list);
		list = list->next;
	}
	return (list);
}
