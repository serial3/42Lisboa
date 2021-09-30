/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 06:08:28 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/23 06:08:30 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	while (nb != 0)
	{
		fac *= nb--;
	}
	return (fac);
}

/* int	main(void)
{
	printf("fatorial: %d\n", ft_iterative_factorial(10));
} */