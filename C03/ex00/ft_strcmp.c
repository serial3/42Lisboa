/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:54:24 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/18 17:54:26 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	a;
	char	b;

	while (1)
	{
		a = *s1++;
		b = *s2++;
		if (a > b)
		{
			return (1);
		}
		else if (a < b)
		{
			return (-1);
		}
		if (!a)
		{
			break ;
		}
	}
	return (0);
}

/* int	main(void)
{
	printf("teste: %d\n", ft_strcmp("baaaaa", "azzzzz"));
}
 */