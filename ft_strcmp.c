/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:07:35 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/06 02:09:17 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*cadena1;
	unsigned char	*cadena2;

	cadena1 = (unsigned char *)s1;
	cadena2 = (unsigned char *)s2;
	while (*cadena1 && (*cadena1 == *cadena2))
	{
		cadena1++;
		cadena2++;
	}
	return (*cadena1 - *cadena2);
}
