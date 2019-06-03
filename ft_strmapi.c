/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 20:30:36 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/31 05:53:44 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*j;

	i = 0;
	if (!s || !f)
		return (NULL);
	j = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (j)
	{
		while (s[i])
		{
			j[i] = f(i, s[i]);
			i++;
		}
		j[i] = '\0';
		return (j);
	}
	return (NULL);
}
