/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:05:45 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:05:49 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_write_to_arr(char **arr, int x, int y, t_lst *lst)
{
	arr[y + lst->y[0]][x + lst->x[0]] = lst->seq;
	arr[y + lst->y[1]][x + lst->x[1]] = lst->seq;
	arr[y + lst->y[2]][x + lst->x[2]] = lst->seq;
	arr[y + lst->y[3]][x + lst->x[3]] = lst->seq;
}

static char	**ft_help(t_args arg, t_lst *lst, char **arr, int num_tetrim)
{
	int	x;

	x = 0;
	while (x + lst->max_x < arg.arr_s)
	{
		if (arr[arg.y + lst->y[0]][x + lst->x[0]] == '.' &&
			arr[arg.y + lst->y[1]][x + lst->x[1]] == '.'
			&& arr[arg.y + lst->y[2]][x + lst->x[2]] == '.' &&
			arr[arg.y + lst->y[3]][x + lst->x[3]] == '.')
		{
			ft_write_to_arr(arr, x, arg.y, lst);
			if (lst->next == NULL)
				return (arr);
			else
			{
				if (ft_fillit(lst->next, num_tetrim + 1, arg.arr_s, arr))
					return (arr);
				else
					ft_del_elem(arr, lst->seq);
			}
		}
		x++;
	}
	return (0);
}

char		**ft_fillit(t_lst *begin_list, int num_tetrim,
			int arr_s, char **arr)
{
	t_lst	*lst;
	t_args	arg;

	arg.y = 0;
	arg.arr_s = arr_s;
	lst = begin_list;
	while (arg.y + lst->max_y < arg.arr_s)
	{
		if (ft_help(arg, lst, arr, num_tetrim))
			return (arr);
		(arg.y)++;
	}
	if (num_tetrim == 1)
	{
		ft_delarr(arr);
		arr = ft_array(++arr_s);
		return (ft_fillit(lst, num_tetrim, arr_s, arr));
	}
	else
		return (NULL);
}
