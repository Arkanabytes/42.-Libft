/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copinto_sc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 23:32:41 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/05 23:44:39 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_copinto_sc(char *s, int *i)
{
	while ((s[*i] == ' ') ||
			(s[*i] == '\v') ||
			(s[*i] == '\r') ||
			(s[*i] == '\t') ||
			(s[*i] == '\n') ||
			(s[*i] == '\f'))
		(*i)++;
}
