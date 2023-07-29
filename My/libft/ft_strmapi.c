
#include "libft.h"

// Applies the function 'f' to each character of the string 's' and creates a new string from the results.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

/*int	main()
{
	printf("return: %s\n", ft_strmapi("HELLO", &ft_lol));
	printf("return: %s\n", ft_strmapi("HELLO", NULL));
	printf("return: %s\n", ft_strmapi("", &ft_lol));
}*/