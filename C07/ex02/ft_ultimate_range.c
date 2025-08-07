#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return 0;
    }

    size = max - min;

    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL)
        return -1; // Erro de alocação

    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }

    return size;
}

int main(void)
{
    int *arr;
    int len;
    int i;

    len = ft_ultimate_range(&arr, 5, 10);

    if (len == -1)
    {
        printf("Erro de alocação de memória.\n");
        return 1;
    }
    else if (len == 0)
    {
        printf("Intervalo inválido ou vazio.\n");
        return 0;
    }

    printf("Tamanho do array: %d\n", len);
    printf("Valores: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

