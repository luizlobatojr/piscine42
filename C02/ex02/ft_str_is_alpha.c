int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
		return 1;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
					|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("str1 is alpha: %d\n", ft_str_is_alpha(str1));  // Saída: 1
    printf("str2 is alpha: %d\n", ft_str_is_alpha(str2));  // Saída: 0
    printf("str3 is alpha: %d\n", ft_str_is_alpha(str3));  // Saída: 1

    return 0;
}*/
