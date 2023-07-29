
/*
** Checks if a character is alphanumeric (letter or digit).
** Returns 1 if the character is alphanumeric, and 0 otherwise.
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
