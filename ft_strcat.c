/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:54:22 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/08 16:01:52 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, const char *src)
{
	char *start = dest;
	
	while(*dest != '\0')
	{
		dest++;
	}
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

int main()
{
	char str1[] = "Esto es";
	char str2[] = "alejandra";

	strcat(str1, str2);

	puts(str1);
	puts(str2);
	return(0);
}
