
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_count;
	size_t	src_count;
	size_t	j;

	i = 0;
	dest_count = 0;
	src_count = 0;
	while (dest[dest_count])
		dest_count++;
	while (src[src_count])
		src_count++;
	j = dest_count;
	if (!size)
		return (src_count);
	while (src[i] && j < size - 1)
		dest[j++] = src[i++];
	dest[j] = 0;
	if (size < dest_count)
		return (src_count + size);
	return (dest_count + src_count);
}
