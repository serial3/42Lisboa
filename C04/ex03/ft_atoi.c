/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:01:22 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/22 20:01:24 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	inside_str(char c, char *string)
{
	while (*string != '\0')
	{
		if (*string++ == c)
			return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	helper;

	result = 0;
	helper = 1;
	while (inside_str(*str, "\t\n\v\f\r "))
		str++;
	while (inside_str(*str, "-+"))
		if (*str++ == '-')
			helper *= -1;
	while (*str <= '9' && *str >= '0')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * helper);
}

/* int	main(void)
{
	char	*str = "   -+-++--12345gg76";

	printf("teste: %d\n", ft_atoi(str));
}
 */