/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 20:02:29 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/23 16:34:51 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strmap(char const *s, char (*f)(char))
{
	int			i;
	char		*str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) *ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i]= f(s[i]);
		i + = 1;
	}
	str[i] = '\0';
	return (str);
}
