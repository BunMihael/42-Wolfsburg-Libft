// Helper function to check if a character is a digit
static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

// Helper function to handle the optional sign
static const char	*handle_sign(const char *str, int *sign)
{
	*sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
	return str;
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	str = handle_sign(str, &sign);

	number = 0;

	while (is_digit(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (sign * number);
}


// #include <stdio.h>


// int main()
// {
//     // Test positive number
//     printf("%d\n", ft_atoi("123"));
//     // Test negative number
//     printf("%d\n", ft_atoi("-123"));
//     // Test number with leading spaces
//     printf("%d\n", ft_atoi("   123"));
//     // Test number with trailing non-digit characters
//     printf("%d\n", ft_atoi("123abc"));
//     // Test number with + sign
//     printf("%d\n", ft_atoi("+123"));
//     // Test number with multiple signs
//     printf("%d\n", ft_atoi("+-123"));
//     // Test empty string
//     printf("%d\n", ft_atoi(""));

//     return 0;
// }
