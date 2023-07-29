
#include "libft.h"

// Returns the length of the string 's'.
size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
