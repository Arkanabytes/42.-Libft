char	*ft_stp(char *dst, const char *src, char c)
{
	while (*src && *src != c)
		*dst++ = *src++;
	*dst = c;
	return (dst);
}