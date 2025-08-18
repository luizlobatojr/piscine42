unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Olá, mundo!";
	char	dest[20];
	unsigned int	ret;

	ret = ft_strlcpy(dest, src, 5);
	printf("dest: %s\n", dest);      // Deve imprimir "Olá,"
	printf("ret: %u\n", ret);        // Deve imprimir o tamanho completo de src (12)
	return (0);
}
*/
