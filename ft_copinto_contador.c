/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copinto_contador.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:48:18 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/03 17:49:03 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_copinto_contador(char const *str, char c)
{
	size_t	co;
	int		i;

	i = 0;
	co = 0;
	while (*str)
	{
		if (!i && *str != c)
			co++;
		i = (*str == c) ? 0 : 1;
		str++;
	}
	return (co);
}
