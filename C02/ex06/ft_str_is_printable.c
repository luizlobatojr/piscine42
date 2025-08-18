int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello\nWorld"; // contém caractere não imprimível: '\n'
    char str3[] = "";
    char str4[] = "\x7F"; // DEL (ASCII 127), não imprimível

    printf("str1 is printable: %d\n", ft_str_is_printable(str1)); // 1
    printf("str2 is printable: %d\n", ft_str_is_printable(str2)); // 0
    printf("str3 is printable: %d\n", ft_str_is_printable(str3)); // 1
    printf("str4 is printable: %d\n", ft_str_is_printable(str4)); // 0

    return 0;
}*/
