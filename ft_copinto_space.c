/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 05:40:00 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 05:40:24 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_copinto_space(const int c)
{
	int	x;

	x = 0;
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}
