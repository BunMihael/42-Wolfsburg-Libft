
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	count;

	count = ft_strlen(str);
	while (count + 1)
	{
		if (*(str + count) == (char)c)
			return ((char *)str + count);
		count--;
	}
	return (NULL);
}
