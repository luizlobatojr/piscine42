char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0')
    {
        // Converte letras maiúsculas em minúsculas
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        // Se for uma letra
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 32; // Torna maiúscula

            new_word = 0;
        }
        else
        {
            new_word = 1; // Próximo caractere alfanumérico inicia nova palavra
        }

        i++;
    }

    return str;
}
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
    char texto[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("Antes : %s\n", texto);
    ft_strcapitalize(texto);
    printf("Depois: %s\n", texto);
    return 0;
}

