/*
** Checks if a character is an alphabet letter (uppercase or lowercase).
** Returns 1 if the character is an alphabet letter, and 0 otherwise.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
