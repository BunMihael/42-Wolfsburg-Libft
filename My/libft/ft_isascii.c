
/*
** Checks if a character is part of the ASCII character set.
** Returns 1 if the character is an ASCII character, and 0 otherwise.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	return (0);
}
