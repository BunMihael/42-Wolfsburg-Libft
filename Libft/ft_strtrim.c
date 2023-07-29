
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	len;
	size_t	i;

	if (s1 && *s1 && set && *set && ft_strchr(set, *s1))
	{
		s1++;
		return (ft_strtrim(s1, set));
	}		
	len = ft_strlen(s1);
	i = len;
	while (i && s1 + i - 1 && *(s1 + i - 1)
		&& ft_strchr(set, *(s1 + i - 1)))
		i--;
	new_str = ft_substr(s1, 0, i);
	return (new_str);
}
