char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[20];
	char *src;

	// Teste 1: src menor que n
	src = "Luiz";
	ft_strncpy(dest, src, 10);
	printf("Teste 1 (src menor que n): [%s]\n", dest);

	// Teste 2: src igual a n
	src = "12345";
	ft_strncpy(dest, src, 5);
	printf("Teste 2 (src igual a n):   [%s]\n", dest);

	// Teste 3: src maior que n
	src = "abcdefghijklmnop";
	ft_strncpy(dest, src, 5);
	dest[5] = '\0'; // forçar null termination para printf
	printf("Teste 3 (src maior que n): [%s]\n", dest);

	// Teste 4: src vazia
	src = "";
	ft_strncpy(dest, src, 5);
	printf("Teste 4 (src vazia):        [%s]\n", dest);

	// Teste 5: n = 0
	src = "Hello";
	ft_strncpy(dest, src, 0);
	dest[0] = '\0';
	printf("Teste 5 (n = 0):            [%s]\n", dest);

	// Teste 6: src com caractere nulo no meio
	char src_with_nulls[] = {'A', 'B', '\0', 'C', 'D', '\0'};
	ft_strncpy(dest, src_with_nulls, 6);
	printf("Teste 6 (src com \\0):       ");
	for (int i = 0; i < 6; i++)
	{
		if (dest[i] == '\0')
			printf("\\0");
		else
			printf("%c", dest[i]);
	}
	printf("\n");

	return (0);
}*/
