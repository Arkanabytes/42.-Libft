
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*final;

	while (1)
	{
		if (*s == c)
			final = (char *)s;
		if (*s++ == '\0')
			return (final);
	}
}