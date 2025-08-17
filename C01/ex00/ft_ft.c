#include <unistd.h>

void ft_ft(int *nbr) {
    *nbr = 42; // coloca o valor 42 no inteiro
}

int main(void) {
    int valor;

    ft_ft(&valor);

    // converter o valor para caracteres e escrever na saída padrão
    char str[3];
    str[0] = (valor / 10) + '0';
    str[1] = (valor % 10) + '0';
    str[2] = '\n';

    write(1, str, 3); // 1 = saída padrão
    return 0;
}