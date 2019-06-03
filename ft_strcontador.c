#include "libft.h"

int		ft_strcontador(char const *str, char c)
{
	size_t	co;
	int		i;

	i = 0;
	co = 0;
	while (*str)
	{
		if (!i && *str != c)
			co++;
		i = (*str == c) ? 0 : 1;
		str++;
	}
	return (co);
}