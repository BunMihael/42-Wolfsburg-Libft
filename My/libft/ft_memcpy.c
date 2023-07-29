
#include "libft.h"

/*
** Copies n bytes from string src to string dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
