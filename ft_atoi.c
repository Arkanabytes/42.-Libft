/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:18:43 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/06 06:40:41 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_atoi(char *str)
{
	int		i;
	long	n;
	int		sig;

	i = 0;
	n = 0;
	sig = 1;
	ft_copinto_sc(str, &i);
	if (str[i] == '-')
	{
		if (str[i + 1] == '+')
			return (0);
		sig = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (sig * n);
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sig);
}
