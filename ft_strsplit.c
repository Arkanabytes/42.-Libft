/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 01:38:13 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/02 01:39:27 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**a;
	size_t	inside_a_word;
	size_t	word_index;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(a = (char **)ft_memalloc((ft_strcontador(s, c) + 1) * sizeof(char *))))
		return (NULL);
	word_index = 0;
	inside_a_word = 0;
	i = -1;
	start = 0;
	while (s[++i])
	{
		if (inside_a_word && s[i] == c)
			a[word_index++] = ft_strsub(s, start, i - start);
		if (!inside_a_word && s[i] != c)
			start = i;
		inside_a_word = (s[i] == c) ? 0 : 1;
	}
	if (inside_a_word)
		a[word_index] = ft_strsub(s, start, i - start);
	return (a);
}
/*
#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**k;
	size_t	pbra;
	size_t	idx;
	size_t	i; 
	size_t	comi;

	if (!s)
		return (NULL);
	if (!(k = (char **)ft_memalloc((ft_strcontador(s, c) + 1) * sizeof(char *))))
		return (NULL);
	idx = 0;
	pbra = 0;
	i = -1;
	comi = 0;
	while (s[++i])
	{
		if (pbra && s[i] == c)
			k[idx++] = ft_strsub(s, comi, i - comi);
		if (!pbra && s[i] != c)
			comi = i;
		pbra = (s[i] == c) ? 0 : 1;
	}
	if (pbra)
		k[pbra] = ft_strsub(s, comi, i - comi);
	return (k);
}
*/