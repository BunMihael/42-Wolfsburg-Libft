
#include "libft.h"

// Compares 's1' and 's2' up to 'n' characters.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	index = 0;
	while (s1_c[index] && s2_c[index] && s1_c[index] == s2_c[index] && index < n)
		index++;
	if (index == n)
		return (0);
	return (s1_c[index] - s2_c[index]);
}
