#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int i;
    int size;

    if (min >= max)
        return (NULL);

    size = max - min; // Quantidade de elementos
    arr = (int *)malloc(size * sizeof(int));
    if (!arr)
        return (NULL);

    i = 0;
    while (min < max)
    {
        arr[i] = min;
        min++;
        i++;
    }
    return (arr);
}
#include <stdio.h>

int main(void)
{
    int min = 3;
    int max = 8;
    int *range = ft_range(min, max);
    int i;

    if (range)
    {
        for (i = 0; i < max - min; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range); // libera memória
    }
    else
    {
        printf("Intervalo inválido.\n");
    }
    return 0;
}

