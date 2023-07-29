
#include "libft.h"

/*
** Fills the first n bytes of the memory area pointed to by s with the constant byte c.
*/
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
