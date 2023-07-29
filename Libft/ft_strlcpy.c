
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = 0;
	while (*(src + len_s))
		len_s++;
	if (!size)
		return (len_s);
	while (i < size - 1 && src + i && *(src + i) && dst + i)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (len_s);
}
