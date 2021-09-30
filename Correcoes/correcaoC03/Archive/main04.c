#include<stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main( void )
{
	printf("results\n");
	printf("return ft_strstr: %s \n", ft_strstr( "Hello Goodbye", "Good"));
	printf("return ft_strstr: %s \n", ft_strstr( "Hello", "He"));
	printf("return ft_strstr: %s \n", ft_strstr( "Hello", "xe"));
	printf("return ft_strstr: %s \n", ft_strstr( "Hello", ""));
	printf("expected results\n");
	printf("Hello Goodbye return strstr: %s \n", strstr( "Hello Goodbye", "Good"));
	printf("return ft_strstr: %s \n", strstr( "Hello", "He"));
	printf("return ft_strstr: %s \n", strstr( "Hello", "xe"));
	printf("Hello return strstr: %s \n", strstr( "Hello", ""));
}
