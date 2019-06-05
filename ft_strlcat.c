/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 05:58:41 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/05 05:45:58 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	izquierda;

	izquierda = size;
	while (*dst && izquierda > 0 && izquierda--)
		dst++;
	while (*src && izquierda > 1 && izquierda--)
		*dst++ = *src++;
	if (izquierda == 1)
		*dst = '\0';
	return (size - izquierda);
}
