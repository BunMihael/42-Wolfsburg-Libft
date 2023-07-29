
/*
** Checks if a character is a digit (0 through 9).
** Returns 1 if the character is a digit, and 0 otherwise.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
