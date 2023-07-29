
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s_c;

	c = (unsigned char)c;
	s_c = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s_c[i] == c)
			return (&s_c[i]);
		i++;
	}
	return (0);
}
