/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:07:55 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/22 18:07:57 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	f;
	int	s;

	s = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[s] != '\0')
	{
		f = 0;
		while ((str[s + f] == to_find[f]) && (str[s + f] != '\0'))
		{
			if (to_find[f + 1] == '\0')
			{
				return (&str[s]);
			}
			f++;
		}
		s++;
	}
	return (0);
}

/* int	main(void)
{
	char	str[12] = "foram cinco";
	char	to_find[12] = "mais cinco";
	printf("teste: %s\n", ft_strstr(str, to_find));
} */