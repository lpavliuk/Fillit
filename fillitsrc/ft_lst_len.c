/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:06:08 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:31:30 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_lst_len(t_lst *lst)
{
	t_lst	*list;
	int		count;

	list = lst;
	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
