/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:04:54 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:04:56 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	ft_valide_input(char *buf, int *i)
{
	int	count;

	count = *i;
	if (count % 5 == 0 && (buf[count] != '\n' && buf[count] != '\0'))
		return (0);
	else if (count == 21)
	{
		if (buf[count] != '\n')
			return (0);
		else
			*i = 0;
	}
	else if (buf[count] != '#' && buf[count] != '.' && (count % 5 != 0))
		return (0);
	return (1);
}

void		ft_check_file(char *av, t_lst **lst)
{
	int		i;
	int		fd;
	char	seq;
	char	buf[21];

	i = 1;
	seq = 64;
	if ((fd = open(av, O_RDONLY)) < 0)
		ft_exit_program(lst);
	while (read(fd, &buf[i], 1))
	{
		if (!(ft_valide_input(buf, &i)))
			ft_exit_program(lst);
		if (i % 20 == 0 && i != 0)
		{
			if (!ft_check_tetrim(buf))
				ft_exit_program(lst);
			ft_write_lst(buf, lst, ++seq);
			ft_bzero(buf, 21);
		}
		i++;
	}
	if (i != 21)
		ft_exit_program(lst);
	close(fd);
}
