
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;
	int		j;

	i = -1;
	j = -1;
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (joined)
	{
		while (s1[++i])
			joined[i] = s1[i];
		i = ft_strlen(s1);
		while (s2[++j])
		{
			joined[i] = s2[j];
			i++;
		}
		joined[i] = 0;
		return (joined);
	}
	else
		return (0);
}
