#include "libft.h"

size_t	ft_strld(const char *s, char c) 
{
	size_t	len;

	len = 0;
	while (*s && *s != c) {
		++s;
		++len;
	}
	return (len);
}