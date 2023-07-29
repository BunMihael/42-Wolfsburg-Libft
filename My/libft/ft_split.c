
#include "libft.h"

// Counts the number of words in the string 's' separated by the character 'c'.
static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

// Frees memory allocated for the 'tab' array.
static void	ft_free_split(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

// Duplicates the first 'n' characters of the string 's'.
static char	*ft_strndup(const char *s, size_t n)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(sizeof(char) * (n + 1));
	if (!new)
		return (NULL);
	while (i < n)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// Fills the 'tab' array with substrings from the string 's' separated by the character 'c'.
static void	ft_fill(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		if (start)
		{
			end = start;
			tab[i] = ft_strndup(s, end);
			if (!tab[i])
			{
				ft_free_split(tab);
				break ;
			}
			i++;
			s += start;
		}
	}
}

// Splits the string 's' into an array of substrings separated by the character 'c'.
char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_wordcount(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	tab[count] = NULL;
	if (count)
		ft_fill(tab, s, c);
	return (tab);
}
