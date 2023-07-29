
/*
** Converts the character 'c' to lowercase if it is uppercase.
** Returns the character unchanged if it is already lowercase or not an alphabetic character.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
