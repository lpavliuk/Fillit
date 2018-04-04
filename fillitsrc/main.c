/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:07:54 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:07:56 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	t_lst	*list;
	char	**out;
	int		i;

	i = 0;
	out = NULL;
	if (ac == 2)
	{
		ft_check_file(av[1], &list);
		if (ft_lst_len(list) > 26)
			ft_exit_program(&list);
		out = ft_fillit(list, 1, 2, ft_array(2));
		while (out[i])
		{
			ft_putendl(out[i]);
			i++;
		}
		ft_delarr(out);
		ft_lst_free(&list);
	}
	else
		ft_putendl("usage: ./fillit source_file");
	return (0);
}
