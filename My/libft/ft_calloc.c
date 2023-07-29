
#include "libft.h"

/*
** Allocates memory for 'count' objects of 'size' each and initializes it to zero.
** Returns a pointer to the allocated memory, or NULL if the allocation fails.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	else
	{
		ft_bzero(ptr, (count * size));
		return (ptr);
	}
}
