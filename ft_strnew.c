/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 13:59:30 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/24 04:15:01 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnew(size_t size)
{
	unsigned long	i;
	char			*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (size >= i)
	{
		str[i] = '\0';
		i += 1;
	}
	return (str);
}