/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 02:38:55 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/27 02:39:51 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int s;

	s = 0;
	if (nb >= 0)
		s = nb;
	if (nb < 0)
	{
		s = nb * -1;
		ft_putchar_fd('-', fd);
	}
	if (s > 9)
		ft_putnbr_fd(s / 10, fd);
	ft_putchar_fd((s % 10) + '0', fd);
}