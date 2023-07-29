
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*s_c;

	c = (char)c;
	s_c = (char *)s;
	i = 0;
	while (s_c[i])
	{
		if (s_c[i] == c)
			return (&s_c[i]);
		i++;
	}
	if (c == '\0')
		return (&s_c[i]);
	else
		return (0);
}
