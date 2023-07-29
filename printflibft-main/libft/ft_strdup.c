
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*copy;
	unsigned int	s1_len;

	s1_len = ft_strlen(s1);
	copy = malloc((s1_len * sizeof(char)) + 1);
	if (copy)
	{
		ft_strlcpy(copy, s1, s1_len + 1);
		return (copy);
	}
	else
		return (0);
}
