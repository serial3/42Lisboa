/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:33:38 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/18 16:33:41 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src [j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/* int     main(void)
{
    char	*src;
	char	dest[19];
	int	result;
	src = "Bonjour avec 42 mon ami";
	result = ft_strlcpy(dest, src, 19);
	printf("String: %s\n", src);
	printf("Copied[18]: %s\nSource lines[%d]: %d", dest, result, result);
} */