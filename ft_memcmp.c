/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:16:45 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/09 12:41:03 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char *s;
	unsigned char		*cmp;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	cmp = (unsigned char) c;
	while(i < n)
	{
		d[i] = s[i];
		if(d[i] == cmp)
		{
			i++;
			return(& d[i];
		}
		i++;
	}
	return(NULL);
}

int		main()
{
int ret_val = 20;

char *str1 = "china";
char *str2 = "korea";

ret_val = memcmp_test(str1,str2, 5);
printf ("ret_val is = %d", ret_val);
getchar();
return(0);
}
