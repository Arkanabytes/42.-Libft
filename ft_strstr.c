/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 21:14:41 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/05 20:38:08 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*i;
	char	*j;

	if (!*s2)
		return ((void *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			i = (void *)s1 + 1;
			j = (void *)s2 + 1;
			while (*i && *j && *i == *j)
			{
				++i;
				++j;
			}
			if (!*j)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
