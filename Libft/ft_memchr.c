
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t				i;
	const unsigned char	*tmp_ptr;

	i = 0;
	tmp_ptr = (unsigned char *)ptr;
	while (i < num)
	{
		if (*(tmp_ptr + i) == (unsigned char)value)
			return ((void *)tmp_ptr + i);
		i++;
	}
	return (NULL);
}
