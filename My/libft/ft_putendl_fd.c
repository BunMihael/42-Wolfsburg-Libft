
#include "libft.h"

/*
** Writes the string 's' to the given file descriptor, followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s++, 1);
	}
	write(fd, "\n", 1);
}
