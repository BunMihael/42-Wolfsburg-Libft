
#include "libft.h"

// Safely concatenates 'src' and 'dest' into a new string.
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_count;
	size_t	src_count;
	size_t	dest_index;
	size_t	src_index;

	dest_count = 0;
	while (dest[dest_count])
		dest_count++;

	src_count = 0;
	while (src[src_count])
		src_count++;

	dest_index = dest_count;
	src_index = 0;

	if (!size)
		return (src_count);

	while (src[src_index] && dest_index < size - 1)
		dest[dest_index++] = src[src_index++];

	dest[dest_index] = 0;

	if (size < dest_count)
		return (src_count + size);

	return (dest_count + src_count);
}
