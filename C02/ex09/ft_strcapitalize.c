/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:31:02 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/18 15:31:04 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z' ))
		{
			str[i] = str[i] - 32;
			j++;
		}
		else if (j != 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			 || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	*str_0;
	char	str[64];
	int	index;

	str_0 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	index = 0;
	while(str_0[index])
	{
		str[index] = str_0[index];
		index++;
	}
	printf("Result: %s", ft_strcapitalize(str));
}
 */