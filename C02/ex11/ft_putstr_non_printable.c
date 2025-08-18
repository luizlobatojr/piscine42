#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] >= 127)
		{
			ft_putchar('\\');
			ft_puthex((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*int main(void)
{
	char str[] = "Ola\nesta bem?";

	ft_putstr_non_printable(str);
	return (0);
}
*/
