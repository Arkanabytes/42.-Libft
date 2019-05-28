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

void                *ft_memset(void *b, int c, size_t len)
{
    unsigned char   i;
    unsigned char   *j;

    i = c;
    j = d;
    while (0 < len)
    {
        *j = i;
        j++;
        len--;
    }
    return ((unsigned char *)b);
}