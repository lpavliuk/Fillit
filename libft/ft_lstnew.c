/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:17:14 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:17:16 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = NULL;
	if ((list = malloc(sizeof(t_list))))
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		if (content)
		{
			if ((list->content = malloc(content_size)))
			{
				ft_memcpy((list->content), content, content_size);
				list->content_size = content_size;
			}
			else
			{
				free(list);
				list = NULL;
			}
		}
	}
	return (list);
}
