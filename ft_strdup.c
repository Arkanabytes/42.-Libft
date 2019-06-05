/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:11:14 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/03 21:41:45 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char		*s;
	int			ln;

	ln = 0;
	while (src[ln])
		++ln;
	if (!(s = (char *)malloc(sizeof(char) * (ln + 1))))
		return (NULL);
	s[ln] = '\0';
	{
		s[ln] = src[ln];
		ln--;
	}
	return (s);
}
