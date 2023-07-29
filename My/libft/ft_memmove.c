
#include "libft.h"

/*
** Copies n bytes from string src to string dest, 
** but unlike ft_memcpy, the source and destination strings may overlap.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;

	i = 0;
	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest > src)
		while (n-- > 0)
			((char *)dest)[n] = ((const char *)src)[n];
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}
