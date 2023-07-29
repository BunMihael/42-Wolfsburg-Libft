
#include "libft.h"

// Concatenates 's1' and 's2' into a new string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		s1_len;
	int		s2_len;

	s1_len = 0;
	s2_len = 0;
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (joined)
	{
		while (s1[s1_len])
		{
			joined[s1_len] = s1[s1_len];
			s1_len++;
		}
		while (s2[s2_len])
		{
			joined[s1_len] = s2[s2_len];
			s1_len++;
			s2_len++;
		}
		joined[s1_len] = '\0';
		return (joined);
	}
	else
		return (NULL);
}
