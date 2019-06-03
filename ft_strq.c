#include "libft.h"

char	*ft_strq(const char **s1, char c)
{
	char	*str;

	str = ft_straloca(*s1, c);
	if (str)
		*s1 = ft_stp(str, *s1, c);
	return (str);
}