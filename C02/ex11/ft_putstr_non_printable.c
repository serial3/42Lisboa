/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:44:39 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/18 16:44:40 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
		{
			write (1, "\\", 1);
			put_char("0123456789abcdef"[str[a] / 16]);
			put_char("0123456789abcdef"[str[a] % 16]);
		}
		else
		{
			put_char(str[a]);
		}
		a++;
	}
}

/* int     main(void)
{
	ft_putstr_non_printable("Coucou\etu vas bien ?\0");
	printf("\n");
	ft_putstr_non_printable("\nCoucou\ntu vas bien ?");
	printf("\n");
	ft_putstr_non_printable("Coucou\vtu vas b\nien ?");
}
 */