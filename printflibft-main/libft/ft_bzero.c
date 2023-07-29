
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	unsigned char	*ch;

	i = 0;
	ch = s;
	while (n > i)
		ch[i++] = 0;
}
