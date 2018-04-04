/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:14:03 by ysamchuk          #+#    #+#             */
/*   Updated: 2018/03/27 16:14:09 by ysamchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_write_fresh(char const **s, char c)
{
	int		word_len;
	char	*result;

	word_len = 0;
	result = NULL;
	while ((*s)[word_len] != c && (*s)[word_len] != '\0')
		word_len++;
	if ((result = (char *)malloc(sizeof(char) * (word_len + 1))))
	{
		word_len = 0;
		while (**s != c && **s != '\0')
		{
			result[word_len] = **s;
			(*s)++;
			word_len++;
		}
		if (**s == '\0')
			(*s)--;
		result[word_len] = '\0';
	}
	return (result);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	count;

	count = 0;
	result = NULL;
	if (s)
		if ((result = (char **)malloc(8 * (ft_strdelim_num(s, c) + 1))))
		{
			result[ft_strdelim_num(s, c)] = NULL;
			while (*s != '\0')
			{
				if (*s != c)
				{
					if ((result[count] = ft_write_fresh(&s, c)))
						count++;
					else
					{
						ft_delarr(result);
						return (NULL);
					}
				}
				s++;
			}
		}
	return (result);
}
