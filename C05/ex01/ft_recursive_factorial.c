/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:55:42 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/23 19:55:43 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	else if (nb < 0)
		return (0);
	return (1);
}

/* int	main(void)
{
	printf("factorial %d\n", ft_recursive_factorial(5));
}
 */