#include <stdio.h>
#include <stdlib.h>

// Protótipo da função ft_split (a função que você já tem)
char **ft_split(char *str, char *charset);

int main(void)
{
    char **result;
    int i = 0;

    // Exemplo de string e separadores
    char str[] = "Hello,,world! This is\ta test.";
    char charset[] = " ,!\t."; // espaços, vírgulas, exclamação, tab, ponto

    result = ft_split(str, charset);
    if (!result)
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Resultado da split:\n");
    while (result[i])
    {
        printf("Palavra %d: '%s'\n", i + 1, result[i]);
        free(result[i]);  // liberar cada palavra
        i++;
    }
    free(result); // liberar o array de ponteiros

    return 0;
}

