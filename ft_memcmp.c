/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:16:45 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 05:03:58 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		k;

	k = 0;
	while ((k < n) && ((unsigned char *)s1)[k] == ((unsigned char *)s2)[k])
		k += 1;
	if (k == n)
		return (0);
	else
		return (((unsigned char *)s1)[k] - ((unsigned char *)s2)[k]);
}
