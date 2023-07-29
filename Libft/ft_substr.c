
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size - start < len)
		len = size - start;
	if (start < size)
		s += start;
	else
		return (ft_strdup(""));
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(tmp + i) = *(s + i);
		i++;
	}
	*(tmp + i) = '\0';
	return (tmp);
}
