#include <unistd.h>

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
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char src[] = "Hello";
	char dest[10];
	ft_strncpy(dest, src, 8);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return 0;
}


