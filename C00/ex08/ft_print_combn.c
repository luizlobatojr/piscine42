#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_comb(int *arr, int n)
{
    int    i;

    i = 0;
    while (i < n)
    {
        ft_putchar(arr[i] + '0');
        i++;
    }
    if (arr[0] != 10 - n)
        write(1, ", ", 2);
}

void	ft_print_combn_rec(int *arr, int n, int idx, int start)
{
    int    i;

    i = start;
    while (i <= 10 - n + idx)
    {
        arr[idx] = i;
        if (idx == n - 1)
            print_comb(arr, n);
        else
            ft_print_combn_rec(arr, n, idx + 1, i + 1);
        i++;
    }
}

void	ft_print_combn(int n)
{
    int    arr[9];

    if (n > 0 && n < 10)
        ft_print_combn_rec(arr, n, 0, 0);
}
/*int    main(void)
{
    ft_print_combn(2);
    return (0);
}*/
