/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:06:00 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:06:02 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lst_free(t_lst **alst)
{
	t_lst	*list;

	if (alst && *alst)
	{
		list = *alst;
		while (list)
		{
			free(list);
			list = list->next;
		}
		*alst = NULL;
	}
}
