int	is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alpha_numeric(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
char texto[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
printf("Antes : %s\n", texto);
ft_strcapitalize(texto);
printf("Depois: %s\n", texto);
return 0;
}
*/
