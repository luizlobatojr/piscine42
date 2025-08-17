#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(unsigned char c)
{
	char *hex = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_put_hex((unsigned char)str[i]);
		i++;
	}
}
int main(void)
{
	char str[] = "Ola\nesta bem?\tTudo certo\0ok";
	ft_putstr_non_printable(str);
	return 0;
}

