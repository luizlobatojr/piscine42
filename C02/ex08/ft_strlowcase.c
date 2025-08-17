char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }

    return str;
}
#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
    char texto[] = "Ola, MUndo!";
    printf("Antes: %s\n", texto);
    ft_strlowcase(texto);
    printf("Depois: %s\n", texto);
    return 0;
}

