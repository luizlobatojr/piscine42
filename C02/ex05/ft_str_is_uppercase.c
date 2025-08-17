#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    if (*str == '\0')
        return 1;

    while (*str)
    {
        if (*str < 'A' || *str > 'Z')
            return 0;
        str++;
    }
    return 1;
}

int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "";
    char str4[] = "123";

    printf("str1 is uppercase: %d\n", ft_str_is_uppercase(str1)); // 1
    printf("str2 is uppercase: %d\n", ft_str_is_uppercase(str2)); // 0
    printf("str3 is uppercase: %d\n", ft_str_is_uppercase(str3)); // 1
    printf("str4 is uppercase: %d\n", ft_str_is_uppercase(str4)); // 0

    return 0;
}

