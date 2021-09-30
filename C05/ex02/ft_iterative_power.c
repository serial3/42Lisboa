/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:55:36 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/25 18:55:37 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power-- > 1)
	{
		result *= nb;
	}
	return (result);
}

/* int	main(void)
{
	printf("valor potencia: %d \n", ft_iterative_power(0, 0));
}
 */