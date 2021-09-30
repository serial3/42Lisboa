#include<stdio.h>
#include <string.h>

int ft_strcat(char *dest, char *src);

int main	( void )
{
	char dest0[20] = "Hello";
	char dest1[20] = "Hello";

	printf("results\n");
	printf("return ft_strcat: %d \n", ft_strcat( dest1, "Good"));
	printf( "%s\n", dest1);

	printf("expected results\n");
	printf("return strcat: %p \n", strcat( dest0, "Good"));
	printf( "%s\n", dest0);

}