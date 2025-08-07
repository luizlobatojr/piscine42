#include <stdlib.h> // para malloc
#include <stddef.h> // para size_t (opcional)

char *ft_strdup(char *src)
{
    char *dup;
    int len = 0;
    int i;

    // Calcula o tamanho da string original
    while (src[len] != '\0')
        len++;

    // Aloca memória (+1 para o caractere nulo '\0')
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    // Copia os caracteres da string original
    i = 0;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }

    // Finaliza a nova string
    dup[i] = '\0';

    return (dup);
}

