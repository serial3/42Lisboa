#include<stdio.h>
#include <string.h> 

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main( void )
{
	char dest[10] = "";
	char dest2[10] = "";
	char src[8] = "Goodbye";

	printf("Original return:   %lu\n", strlcat( dest, src, sizeof(dest)));
	printf("Original dest:  %s\n", dest);
	printf("My return:   %u\n", ft_strlcat( dest2, src, sizeof(dest2)));
	printf("My dest:  %s\n", dest2);

	return (0);
}