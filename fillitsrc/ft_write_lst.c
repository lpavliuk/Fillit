/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:06:18 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:09:02 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_lst_coord_max(t_lst *lst)
{
	int	i;
	int	max_x;
	int	max_y;

	i = 0;
	max_x = 0;
	max_y = 0;
	while (i < 4)
	{
		if (max_x < lst->x[i])
			max_x = lst->x[i];
		if (max_y < lst->y[i])
			max_y = lst->y[i];
		i++;
	}
	lst->max_x = max_x;
	lst->max_y = max_y;
}

void		ft_lst_coordinates(t_lst *lst)
{
	int	i;
	int min_x;
	int min_y;

	i = 0;
	min_x = 20;
	min_y = 20;
	while (i < 4)
	{
		if (min_x > lst->x[i])
			min_x = lst->x[i];
		if (min_y > lst->y[i])
			min_y = lst->y[i];
		i++;
	}
	while (i)
	{
		lst->x[i - 1] = lst->x[i - 1] - min_x;
		lst->y[i - 1] = lst->y[i - 1] - min_y;
		i--;
	}
	ft_lst_coord_max(lst);
}

static int	ft_lst_add_back(t_lst **begin_list)
{
	t_lst	*list;
	t_lst	*result;

	if (begin_list)
	{
		list = *begin_list;
		if ((result = malloc(sizeof(t_lst))))
		{
			result->next = NULL;
			if (!(*begin_list))
				*begin_list = result;
			else
			{
				while (list->next)
					list = list->next;
				list->next = result;
			}
			return (1);
		}
	}
	return (0);
}

int			ft_write_lst(char *buf, t_lst **lst, char seq)
{
	t_lst	*list;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((ft_lst_add_back(lst)))
	{
		list = ft_end_lst(*lst);
		while (i < 21)
		{
			if (buf[i] == '#')
			{
				list->x[j] = (i % 5) - 1;
				list->y[j] = i / 5;
				j++;
			}
			list->seq = seq;
			i++;
		}
		ft_lst_coordinates(list);
		return (1);
	}
	return (0);
}
