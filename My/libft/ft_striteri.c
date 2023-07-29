
// Applies the function 'f' to each character of the string 's'.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return;
	
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main()
{
	char hello[] = "HELLO";
	ft_striteri(hello, &ft_loliteri);
	printf("return: %s\n", hello);
	char hello1[] = "HELLO";
	ft_striteri(hello1, NULL);
	printf("return: %s\n", hello1);
	char hello2[] = "";
	ft_striteri(hello2, &ft_loliteri);
	printf("return: %s\n", hello2);
}*/