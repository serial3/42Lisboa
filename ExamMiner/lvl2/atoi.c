#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	test;
	int	sign;

	sign = 1;
	test = 0;
	a = 0;
	while (str[a] == 32 || str[a] >= 9 && str[a] <= 13)
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		test *= 10;
		test += str[a] - '0';
		a++;
	}
	return (test * sign);
}

int	main(void)
{
	char g[15] = "721894129";

	printf("%d \n", ft_atoi(g));
	printf("%d \n", atoi(g));
}
