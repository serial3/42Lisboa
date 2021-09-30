#include<stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main	( void )
{
	char dest0[20] = "Hello";
	char dest1[20] = "Hello";
	

	printf("results\n");
	printf("return ft_strcat: %p \n", ft_strncat( dest1, "Good", 5));
	printf( "%s\n", dest1);
	printf("return ft_strcat: %p \n", ft_strncat( dest1, "Good", 2));
	printf( "%s\n", dest1);

	printf("expected results\n");
	printf("return strcat: %p \n", strncat( dest0, "Good", 5));
	printf( "%s\n", dest0);
	printf("return strcat: %p \n", strncat( dest0, "Good", 2));
	printf( "%s\n", dest0);

}