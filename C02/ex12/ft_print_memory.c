#include <unistd.h>

// Função básica para escrever um caractere
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Imprime valor hexadecimal (2 dígitos)
void	ft_print_hex(unsigned char c)
{
	char *hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

// Imprime endereço em 16 dígitos hexadecimais
void	ft_print_addr(unsigned long addr)
{
	int shift = 60;
	while (shift >= 0)
	{
		ft_print_hex((addr >> shift) & 0xFF);
		shift -= 8;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

// Imprime os bytes em hex com formatação
void	ft_print_content_hex(unsigned char *ptr, int size)
{
	int i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_hex(ptr[i]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

// Imprime a parte ASCII, substituindo não imprimíveis por '.'
void	ft_print_content_ascii(unsigned char *ptr, int size)
{
	int i = 0;
	while (i < size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			ft_putchar(ptr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

// Função principal
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i = 0;
	unsigned char	*ptr = (unsigned char *)addr;

	if (size == 0)
		return addr;

	while (i < size)
	{
		int block_size = 16;
		if (size - i < 16)
			block_size = size - i;

		ft_print_addr((unsigned long)(ptr + i));
		ft_print_content_hex(ptr + i, block_size);
		ft_print_content_ascii(ptr + i, block_size);
		ft_putchar('\n');
		i += 16;
	}
	return addr;
}
int main(void)
{
	char str[] = "Bonjour les aminches\t\n\tcoucou\7 comment tu vas ?";
	ft_print_memory(str, sizeof(str) - 1);
	return 0;
}

