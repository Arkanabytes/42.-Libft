/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:58:53 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/12 21:15:13 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	if(ft_islower(c) || ft_issuper(c));
	return(1);
	else 
	return(0);
}

int main()
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if (isalpha(c) == 0)
		printf("%c is not an alphabet.", c);
	else
		printf("%c is an alphabet.", c);
	return 0;
}
