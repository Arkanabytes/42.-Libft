/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 04:10:02 by copinto-          #+#    #+#             */
/*   Updated: 2019/05/18 16:03:39 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_srca(char *src, char c)
{
	char	*str;
	char	*i;

	str = malloc(sizeof(char *) * (ft_strlen(src) + 2));
	if (str)
	{
		i = ft_strcpy(str, src);
		*i++ = c;
		*i = '\0';
		free(src);
	}
	return (str);
}

void	rec(char **str, int n) {

	if ((n / 10) > 0)
		rec(str, n / 10);
	*str = ft_srca(*str, (n % 10) + '0');

}

char*	ft_itoa(int n)
{
	char	*str;

	str = ft_strnew(1);
	if (str)
	{
		if (n < 0)
		{
			n = -n;
			str = ft_srca(str, '-');
		}
		rec(&str, n);
	}
	return (str);
}






/*
char	*ft_strappend(char *src, char c)
{
	char	*str;
	char	*itr;

	str = malloc(sizeof(char *) * (ft_strlen(src) + 2));
	if (str)
	{
		itr = ft_stpcpy(str, src);
		*itr++ = c;
		*itr = '\0';
		free(src);
	}
	return (str);
}

void	append_digit_recursive(char **str, int n) {

	if ((n / 10) > 0)
		append_digit_recursive(str, n / 10);
	*str = ft_strappend(*str, (n % 10) + '0');

}

char*	ft_itoa(int n)
{
	char	*str;

	str = ft_strnew(1);
	if (str)
	{
		if (n < 0)
		{
			n = -n;
			str = ft_strappend(str, '-');
		}
		append_digit_recursive(&str, n);
	}
	return (str);
}

*/