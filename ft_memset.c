/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 02:38:55 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/27 02:39:51 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char u;
	unsigned char *s;

	u = c;
	s = b;
	while (0 < len)
	{
		*s = u;
		s++;
		len--;
	}
	return ((unsigned char *)b);
}