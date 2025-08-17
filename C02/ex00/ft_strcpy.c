char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*orig_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (orig_dest);

}
/*#include <stdio.h>

int	main(void)
{
	char	dest1[50];
	char	dest2[50];
	char	dest3[1];
	char	dest4[50];
	char	dest5[50];
	char	*src;

	// Teste 1: String normal
	src = "Luiz Lobato";
	ft_strcpy(dest1, src);
	printf("Teste 1: [%s]\n", dest1);

	// Teste 2: String vazia
	src = "";
	ft_strcpy(dest2, src);
	printf("Teste 2: [%s]\n", dest2);

	// Teste 3: String de 1 caractere
	src = "A";
	ft_strcpy(dest3, src);
	printf("Teste 3: [%s]\n", dest3);

	// Teste 4: String com espaços e pontuação
	src = "Hello, World!";
	ft_strcpy(dest4, src);
	printf("Teste 4: [%s]\n", dest4);

	// Teste 5: String longa
	src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	ft_strcpy(dest5, src);
	printf("Teste 5: [%s]\n", dest5);

	return (0);
}*/
