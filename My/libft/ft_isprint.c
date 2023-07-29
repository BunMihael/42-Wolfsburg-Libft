
/*
** Checks if a character is a printable ASCII character.
** Returns 1 if the character is printable, and 0 otherwise.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
