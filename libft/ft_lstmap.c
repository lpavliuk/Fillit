/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:18:07 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:18:08 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_lst_free(t_list **lst)
{
	t_list	*list;

	list = *lst;
	while (list)
	{
		free(list->content);
		free(list);
		list = list->next;
	}
	lst = NULL;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *current;
	t_list *result;
	t_list *tmp;

	if (lst == NULL || *f == NULL)
		return (NULL);
	result = (*f)(lst);
	tmp = result;
	current = lst->next;
	while (current)
	{
		if (!(tmp->next = (*f)(current)))
		{
			ft_lst_free(&result);
			return (NULL);
		}
		current = current->next;
		tmp = tmp->next;
	}
	return (result);
}
