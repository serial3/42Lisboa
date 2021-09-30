/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:22:46 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/22 16:22:47 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	if (nb)
	{
		while (*dest != '\0')
			dest++;
		while (*src != 0)
		{
			if (nb <= 0)
				break ;
			else
				*dest++ = *src++;
			nb--;
		}
		*dest = '\0';
	}
	return (temp);
}

/* int	main(void)
{
	char	dest[17] = "abc12";
	char	src[15] = "def456789";
	printf("teste: %s\n", ft_strncat(dest, src, 5));
} */