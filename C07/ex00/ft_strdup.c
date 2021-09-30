/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 05:30:36 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/27 05:30:37 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	while (i != '\0')
	{
		i++;
	}
	a = (char *)malloc(sizeof(*src) * i + 1);
	if (a == NULL)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

/* int	main(void)
{
	char b[25] = "joseph";

	printf("teste: %s \n", ft_strdup(b));
} */