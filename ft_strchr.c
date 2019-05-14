/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:47:39 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/11 16:16:38 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_strchr(const char *str, int c);
	int main()
	{
		const char str[]= "hola";
		const char ch = '.';
		char  *ret;

		ret = ft_strchr(str, ch);
		printf("string after |%c| is - |%s|\n", ch, ret);
		return(0);
}
