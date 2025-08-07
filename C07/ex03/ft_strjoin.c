#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i, j;
    int total_len = 0;
    char *result;

    // Caso especial: size == 0 → string vazia
    if (size == 0)
    {
        result = malloc(1);
        if (result)
            result[0] = '\0';
        return result;
    }

    // Calcula tamanho total das strings + separadores
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            total_len++;
            j++;
        }
        i++;
    }

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (sep[j] != '\0')
        {
            total_len++;
            j++;
        }
        i++;
    }

    total_len++; // caractere nulo final

    // Aloca memória
    result = malloc(total_len);
    if (!result)
        return NULL;

    // Copia strings e separadores
    int pos = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
            result[pos++] = strs[i][j++];

        if (i < size - 1)
        {
            j = 0;
            while (sep[j] != '\0')
                result[pos++] = sep[j++];
        }
        i++;
    }

    result[pos] = '\0';
    return result;
}

int main(void)
{
    char *strs[] = {"Hello", "World", "in", "C"};
    char sep[] = " - ";
    char *result;

    result = ft_strjoin(4, strs, sep);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }

    // Teste com size = 0
    result = ft_strjoin(0, strs, sep);
    if (result)
    {
        printf("String vazia: '%s'\n", result);
        free(result);
    }

    return 0;
}

