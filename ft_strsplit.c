/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 01:38:13 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/04 16:37:37 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**a;
	size_t	word;
	size_t	index;
	size_t	i;
	size_t	st;

	index = 0;
	word = 0;
	i = -1;
	st = 0;
	if (!s || (!(a = (char **)ft_memalloc((
							ft_copinto_contador(s, c) + 1) * sizeof(char *)))))
		return (NULL);
	while (s[++i])
	{
		if (word && s[i] == c)
			a[index++] = ft_strsub(s, st, i - st);
		if (!word && s[i] != c)
			st = i;
		word = (s[i] == c) ? 0 : 1;
	}
	if (word)
		a[index] = ft_strsub(s, st, i - st);
	return (a);
}
