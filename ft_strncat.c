/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 01:17:39 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/08 16:32:18 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, const char *src)
{
	char* ptr = dest + strlen(dest);
	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}

int main()
{
char src[50] = "pepita";
char dest[50] = "abc";

ft_strncat (dest, src, 5);
printf("Source string : %s\n", src);
printf("Destination string : %s", dest);
return (0);
}
