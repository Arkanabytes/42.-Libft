/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 05:58:41 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 14:12:07 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *s1, const char *s2)
{
    int        len;
    int        i;

    i = 0;
    len = ft_strlen(s1);
    while (s2[i] != 0)
    {
        s1[len++] = s2[i++];
    }
    s1[len] = '\0';
    return (s1);
}

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] && j < dstsize)
	{
		j++;
	}
	i = j;
	while (j + 1 < dstsize && src[j - i])
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < dstsize)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}
*/
