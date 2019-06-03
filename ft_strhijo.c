#include "libft.h"

void	ft_strhijo(char **tab, const char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			*tab++ = ft_strq(&s, c);
		s++;
	}
	*tab = NULL;
}