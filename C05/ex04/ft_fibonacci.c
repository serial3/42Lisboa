/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 23:26:10 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/25 23:26:11 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index >= 2)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	if (index < 0)
		return (-1);
	return (index);
}

/* int	main(void)
{
	printf("veremos: %d \n", ft_fibonacci(6));
}
 */