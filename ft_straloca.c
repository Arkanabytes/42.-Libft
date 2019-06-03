#include "libft.h"

char	*ft_straloca(const char *s, char c)
{
	return (char *)malloc((ft_strld(s, c) + 1) * sizeof(char));
}