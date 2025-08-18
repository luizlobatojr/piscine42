char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str1[] = "hello world!";
    char str2[] = "123abcXYZ";
    char str3[] = "";

    printf("Original: hello world! → %s\n", ft_strupcase(str1)); // HELLO WORLD!
    printf("Original: 123abcXYZ    → %s\n", ft_strupcase(str2)); // 123ABCXYZ
    printf("Original: (empty)      → %s\n", ft_strupcase(str3)); // (empty)

    return 0;
}
*/
