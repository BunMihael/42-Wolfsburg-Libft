#include "libft.h"

// Helper function to count the number of digits in a number
static int	count_digits(int n)
{
	int	count = 0;

	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

// Improved version of ft_itoa
char	*ft_itoa(int n)
{
	int		is_negative;
	int		len;
	char	*str;

	is_negative = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	len = count_digits(n) + is_negative;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);

	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';

	return (str);
}


/*
int main()
{
	printf("return: %s\n",ft_itoa(2147483647));
	printf("return: %s\n",ft_itoa(-2147483648));
	printf("return: %s\n",ft_itoa(0));
	printf("return: %s\n",ft_itoa(42));
	printf("return: %s\n",ft_itoa(-42));
	return (0);
}*/