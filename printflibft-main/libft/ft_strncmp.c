
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	s1_c = (unsigned char *) s1;
	s2_c = (unsigned char *) s2;
	i = 0;
	while (s1_c[i] && s2_c[i] && s1_c[i] == s2_c[i] && i < n)
		i++;
	if (n == i)
		return (0);
	return (s1_c[i] - s2_c[i]);
}
