/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:45:19 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/10 16:45:22 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_first(char c)
{
	if (c <= 9)
	{
		ft_putchar('0');
		ft_putchar(c + '0');
	}
	else
	{
		ft_putchar(c / 10 + '0');
		ft_putchar(c % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	y;
	int	x;

	x = 1;
	y = 0;
	while (y < 99)
	{
		while (x <= 99)
		{
			ft_print_first(y);
			ft_putchar(' ');
			ft_print_first(x);
			if (y != 98 || x != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = y + 1;
	}
}
