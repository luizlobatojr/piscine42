int	ft_is_str_alpha(char *str)
{
	if (str == NULL || *str == '\0')
		return 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("str1 is alpha: %d\n", ft_is_str_alpha(str1));  // Saída: 1
    printf("str2 is alpha: %d\n", ft_is_str_alpha(str2));  // Saída: 0
    printf("str3 is alpha: %d\n", ft_is_str_alpha(str3));  // Saída: 1

    return 0;
}
