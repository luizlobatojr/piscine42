char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    static char result[35];
    int base_from_len = 0;
    int base_to_len = 0;
    int i, j;
    int sign = 1;
    int num = 0;
    int idx;
    int res_len = 0;
    int tmp;
    char temp[35];

    // strlen base_from
    base_from_len = 0;
    while (base_from[base_from_len])
        base_from_len++;

    // strlen base_to
    base_to_len = 0;
    while (base_to[base_to_len])
        base_to_len++;

    // valida base_from
    if (base_from_len < 2)
        return 0;
    i = 0;
    while (i < base_from_len)
    {
        if (base_from[i] == '+' || base_from[i] == '-' || base_from[i] <= 32)
            return 0;
        j = i + 1;
        while (j < base_from_len)
        {
            if (base_from[i] == base_from[j])
                return 0;
            j++;
        }
        i++;
    }

    // valida base_to
    if (
#include <stdio.h>

// Declare a função para evitar warnings
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
    char *num_str;
    char *base_from;
    char *base_to;
    char *result;

    // Exemplo 1: Converter número decimal para hexadecimal
    num_str = "   -255";
    base_from = "0123456789";
    base_to = "0123456789ABCDEF";

    result = ft_convert_base(num_str, base_from, base_to);
    if (result)
        printf("'%s' (base %lu) -> '%s' (base %lu)\n", num_str, 
            (unsigned long)strlen(base_from), result, (unsigned long)strlen(base_to));
    else
        printf("Conversão inválida!\n");

    // Exemplo 2: Converter hexadecimal para binário
    num_str = "  +1A3f";
    base_from = "0123456789abcdef";
    base_to = "01";

    result = ft_convert_base(num_str, base_from, base_to);
    if (result)
        printf("'%s' (base %lu) -> '%s' (base %lu)\n", num_str, 
            (unsigned long)strlen(base_from), result, (unsigned long)strlen(base_to));
    else
        printf("Conversão inválida!\n");

    // Exemplo 3: Converter binário para decimal
    num_str = " -101010";
    base_from = "01";
    base_to = "0123456789";

    result = ft_convert_base(num_str, base_from, base_to);
    if (result)
        printf("'%s' (base %lu) -> '%s' (base %lu)\n", num_str, 
            (unsigned long)strlen(base_from), result, (unsigned long)strlen(base_to));
    else
        printf("Conversão inválida!\n");

    return 0;
}

