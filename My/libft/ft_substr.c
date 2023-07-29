
#include "libft.h"

/*
** Allocates (with malloc) and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len || len == 0)
	{
		substr = (char *)malloc(sizeof(char));
		if (substr)
			substr[0] = '\0';
	}
	else
	{
		if (str_len < start + len)
			len = str_len - start;
		substr = (char *)malloc((len + 1) * sizeof(char));
		if (substr)
			ft_strlcpy(substr, s + start, len + 1);
	}
	return (substr);
}
