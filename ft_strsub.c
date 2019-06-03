/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:31:19 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 06:32:03 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	st = (char *)malloc(sizeof(char) * (len + 1));
	if (!st)
		return (NULL);
	i = 0;
	while (i < len)
	{
		st[i] = s[i + start];
		i++;
	}
	st[i] = '\0';
	return (st);
}
