
/*
** Converts the character 'c' to uppercase if it is lowercase.
** Returns the character unchanged if it is already uppercase or not an alphabetic character.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
