/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 13:48:44 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/02 16:57:16 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l;
	size_t	l2;
	int		r;

	l = ft_strlen(s1);
	l2 = ft_strlen(s2);
	l = (l <= l2) ? l + 1 : l2 + 1;
	l = (l <= n) ? l : n;
	r = ft_memcmp(s1, s2, l);
	return (r);
}