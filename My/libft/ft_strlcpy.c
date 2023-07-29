
#include "libft.h"

// Safely copies the string 'src' into 'dst'.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_index;
	size_t	src_len;

	src_index = 0;
	if (dstsize > 0)
	{
		while (src[src_index] && src_index < dstsize - 1)
		{
			dst[src_index] = src[src_index];
			src_index++;
		}
		dst[src_index] = 0;
	}
	src_len = src_index;
	while (src[src_len])
		src_len++;
	return (src_len);
}
