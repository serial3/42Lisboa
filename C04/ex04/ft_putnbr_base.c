/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 02:50:44 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/23 02:50:46 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	helper(long n, char *base, int len)
{
	if (n < 0)
		ft_putchar('-');
	n *= 1 - ((n < 0) * 2);
	if (n >= len)
		helper(n / len, base, len);
	ft_putchar(base[n % len]);
}

int	check_reps(char *base, int index)
{
	int	i;

	i = index + 1;
	while (base[i] != '\0')
	{
		if (base[index] == base[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '-' || base[len] == '+')
			return ;
		if (check_reps(base, len))
			return ;
		len++;
	}
	if (len > 1)
		helper((long) nbr, base, len);
}

/* int	main(void)
{
	int	n = 12;
	char	*b = "1234";
	ft_putnbr_base(n, b);
	printf("\n");
	n = -1241;
	b = "012345678";
	ft_putnbr_base(n, b);
	printf("\n");
	n = 12;
	b = "0123456789abcde";
	ft_putnbr_base(n, b);
	printf("\n");
	n = 432;
	b = "andre";
	ft_putnbr_base(n, b);
	printf("\n");
	ft_putnbr_base(12, "013");
} */