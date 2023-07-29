
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	len = ft_strlen(str);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (new_str)
	{
		while (i < len)
		{
			new_str[i] = str[i];
			i++;
		}
		new_str[i] = '\0';
	}
	else
		return (NULL);
	return (new_str);
}
