
#include "libft.h"

// Creates a new string which is a duplicate of the string 's1'.
char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (copy)
	{
		ft_strlcpy(copy, s1, ft_strlen(s1) + 1);
		return (copy);
	}
	else
		return (NULL);
}
