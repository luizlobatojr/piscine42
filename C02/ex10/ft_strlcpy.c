unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;

    // Copia até size - 1 caracteres ou até o fim de src
    if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0'; // Terminador nulo
    }

    // Conta o tamanho total de src
    while (src[i] != '\0')
        i++;

    return i; // Retorna comprimento de src
}
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[] = "Hello, World!";
    char dest[20];

    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Fonte       : %s\n", src);
    printf("Destino     : %s\n", dest);
    printf("Tamanho src : %u\n", len);

    return 0;
}

