/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:06:43 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/13 15:56:47 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	char csrc[100] ="geeksfor";
	memcpy(csrc+5, csrc, strlen(csrc)+1)
	printf("%s", csrc);
	return 0;
}
