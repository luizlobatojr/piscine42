int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return 0;
		i++;
	}
	return 1;
}
/*
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	printf("%d\n", ft_str_is_lowercase("abc"));     // 1
	printf("%d\n", ft_str_is_lowercase("aBc"));     // 0
	printf("%d\n", ft_str_is_lowercase(""));        // 1
	printf("%d\n", ft_str_is_lowercase("abc123"));  // 0
	return 0;
}
*/
