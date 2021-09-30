/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 00:35:25 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/26 00:35:26 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	b;

	if (nb <= 0)
		return (0);
	if (nb < 2)
		return (1);
	b = 0;
	while (1)
	{
		if (b * b > (unsigned int)nb)
			return (0);
		else if (b * b == (unsigned int)nb)
			return (b);
		b++;
	}
	return (0);
}

/* int	main(void)
{
	printf("raiz: %d \n", ft_sqrt(9));
}
 */