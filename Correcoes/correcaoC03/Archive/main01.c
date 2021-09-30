#include<stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main	( void )
{
	printf("results\n");
	printf( "%d\n", ft_strncmp("This is string a", "This is string Z",17));
	printf( "%d\n", ft_strncmp("This is string a", "This is string a",17));
	printf( "%d\n", ft_strncmp("This is string a", "This is string b",17));
	printf( "%d\n", ft_strncmp("This is string a", "This is string Z",5));
	printf( "%d\n", ft_strncmp("This is string a", "This is string a",1));
	printf( "%d\n", ft_strncmp("This is string a", "This is string b",0));
	printf( "%d\n", ft_strncmp("This is string a",  "This a",17));
	printf( "%d\n", ft_strncmp("", "",17));
	printf("expected results\n");
	printf( "%d\n", strncmp("This is string a", "This is string Z",17));
	printf( "%d\n", strncmp("This is string a", "This is string a",17));
	printf( "%d\n", strncmp("This is string a", "This is string b",17));
	printf( "%d\n", strncmp("This is string a", "This is string Z",5));
	printf( "%d\n", strncmp("This is string a", "This is string a",1));
	printf( "%d\n", strncmp("This is string a", "This is string b",0));
	printf( "%d\n", strncmp("This is string a", "This a",17));
	printf( "%d\n", strncmp("","",17));
}