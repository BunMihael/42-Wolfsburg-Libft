
#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*ch;

	i = 0;
	ch = s;
	while (n > i)
		ch[i++] = c;
	return (s);
}
