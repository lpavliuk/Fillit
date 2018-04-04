/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:03:59 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/04/02 18:04:01 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <fcntl.h>

typedef	struct	s_args
{
	int		y;
	int		arr_s;
}				t_args;

typedef struct	s_lst
{
	int				x[4];
	int				y[4];
	int				max_x;
	int				max_y;
	char			seq;
	struct s_lst	*next;
}				t_lst;

void			ft_check_file(char *av, t_lst **lst);
int				ft_check_tetrim(char *buf);
int				ft_check_sqr(char *buf, int i);
int				ft_check_r(char *buf, int i);
int				ft_check_i(char *buf, int i);
int				ft_check_l(char *buf, int i);
int				ft_check_t(char *buf, int i);
int				ft_check_z2(char *buf, int i);
int				ft_check_z1(char *buf, int i);
int				ft_write_lst(char *buf, t_lst **lst, char seq);
t_lst			*ft_end_lst(t_lst *lst);
void			ft_lst_free(t_lst **alst);
int				ft_lst_len(t_lst *lst);
char			**ft_fillit(t_lst *begin_list, int num_tetrim, int arr_size,
				char **arr);
char			**ft_array(int size);
void			ft_del_elem(char **arr, char symb);
void			ft_exit_program(t_lst	**lst);

#endif
