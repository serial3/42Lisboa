#include<stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main	( void )
{
	printf("results\n");
	printf( "%d\n", ft_strcmp("This is string a", "This is string Z"));
	printf( "%d\n", ft_strcmp("This is string a", "This is string a"));
	printf( "%d\n", ft_strcmp("This is string a", "This is string b"));
	printf( "%d\n", ft_strcmp("This is string a",  "This a"));
	printf( "%d\n", ft_strcmp("", ""));
	printf("expected results\n");
	printf( "%d\n", strcmp("This is string a", "This is string Z"));
	printf( "%d\n", strcmp("This is string a", "This is string a"));
	printf( "%d\n", strcmp("This is string a", "This is string b"));
	printf( "%d\n", strcmp("This is string a", "This a"));
	printf( "%d\n", strcmp("",""));
}
