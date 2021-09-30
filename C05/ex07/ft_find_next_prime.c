/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 02:03:28 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/26 02:03:29 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	i = 2;
	if ((unsigned int)nb > 0)
	{
		if ((unsigned int)nb <= 2)
		{
			nb = 2;
		}
		while (i < (unsigned int)nb / 2)
		{
			while ((unsigned int)nb % i == 0)
			{
				nb++;
				i = 2;
			}
			i++;
		}
	}
	return (nb);
}

/* int	main(void)
{
	printf("primo: %d \n", ft_find_next_prime(24));
}
 */