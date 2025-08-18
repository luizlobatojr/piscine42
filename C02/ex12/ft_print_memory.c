#include <unistd.h>

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_puthex_byte(unsigned char c)
{
	char	*hex = "0123456789abcdef";

	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_print_addr(unsigned long long addr)
{
	char	hex[16];
	int		i;
	char	*base = "0123456789abcdef";

	i = 15;
	while (i >= 0)
	{
		hex[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, hex, 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int			i;
	unsigned int			j;
	unsigned char			*ptr;

	ptr = (unsigned char *)addr;
	if (size == 0)
		return (addr);
	i = 0;
	while (i < size)
	{
		// 1. Imprime endereço (16 hex dígitos)
		ft_print_addr((unsigned long long)(ptr + i));
		write(1, ": ", 2);

		// 2. Imprime conteúdo em hexadecimal, 16 bytes por linha, agrupados a cada 2 bytes
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
				ft_puthex_byte(ptr[i + j]);
			else
			{
				write(1, "  ", 2);
			}
			if (j % 2 == 1)
				ft_putchar(' ');
			j++;
		}

		// 3. Imprime o conteúdo em caracteres ('.' para não imprimíveis)
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (ft_is_printable(ptr[i + j]))
				ft_putchar(ptr[i + j]);
			else
				ft_putchar('.');
			j++;
		}

		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
/*int	main(void)
{
	char test[] = "Bonjour les amines\n\tc est fou tout ce qu on peut faire avec.\n\nprint_memory\n\nlol.lol.lol\n";

	ft_print_memory(test, sizeof(test) - 1);
	return (0);
}
*/
