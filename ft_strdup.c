/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:11:14 by copinto-          #+#    #+#             */
/*   Updated: 2019/06/06 05:29:27 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*resultado;

	resultado = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (resultado)
		resultado = ft_strcpy(resultado, (char *)s);
	return (resultado);
}
