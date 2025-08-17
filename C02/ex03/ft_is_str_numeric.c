#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while(*str)
	{
		if(*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
int main(void) 
{
	char str1[] = "12345";
	char str2[] = "123A45";
	char str3[] = "";
	
	printf("str1 is numeric: %d\n", ft_str_is_numeric(str1));
	printf("str2 is numeric: %d\n", ft_str_is_numeric(str2));
	printf("str3 is numeric: %d\n", ft_str_is_numeric(str3));
	
	return 0;
}
