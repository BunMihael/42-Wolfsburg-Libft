
#include "libft.h"

void	*ft_memset(void *buf, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = (unsigned char *)buf;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = val;
		i++;
	}
	return (buf);
}
