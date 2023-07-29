
#include "libft.h"


/*
** Checks if the character 'c' is in the string 'set'.
*/
static int	ft_isset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

/*
** Allocates (with malloc) and returns a copy of ’s1’ 
** with the characters specified in ’set’ removed 
** from the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}

// #include <stdio.h>

// int	main()
// {
// 	char *s1 = "   Hello, world!   ";
// 	char *set = " ";
// 	char *trimmed = ft_strtrim(s1, set);
	
// 	printf("Original string: '%s'\n", s1);
// 	printf("Trimmed string: '%s'\n", trimmed);
	
// 	free(trimmed);
// 	return (0);
// }
