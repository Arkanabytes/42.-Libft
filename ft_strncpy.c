/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:37:01 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/03 19:16:56 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*rosa;
	size_t	com;

	rosa = (char *)dst;
	com = n;
	while (*src && n--)
		*dst++ = *src++;
	if (n < com)
		ft_bzero(dst, n);
	return (rosa);
}
