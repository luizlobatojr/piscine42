#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + '0');
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j;
    int temp;

    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int tab[] = {5, 2, 9, 1, 5, 6};
    int size = 6;
    int i = 0;

    // Antes da ordenação
    while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');

    ft_sort_int_tab(tab, size);

    // Depois da ordenação
    i = 0;
    while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');

    return 0;
}
