/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:56:15 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/16 20:56:16 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	}
	return (str);
}
/* int     main(void)
{
	char	*str;
	char	str_2[32];
	int	index;
	str = "Thanks for the Tests Pulga! <3!";
	index = 0;
	while (str[index])
	{
		str_2[index] = str[index];
		index++;
	}
	printf("String: %s\n", str);
	printf("Upper Case: %s", ft_strupcase(str_2));
}
 */