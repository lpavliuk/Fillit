/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:18:53 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:18:55 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || ((c >= 97 && c <= 122) ||
	(c >= 65 && c <= 90)))
		return (1);
	return (0);
}
