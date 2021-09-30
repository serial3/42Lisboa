/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:29:51 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/18 17:29:52 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_hex(unsigned int nb, int is_recursive)
{
	char	*c;
	char	res;

	if (!is_recursive && nb < 16)
		write(1, "0", 1);
	if (nb > 16)
	{
		get_hex(nb / 16, 1);
		nb = nb % 16;
	}
	if (nb > 9)
		res = 'a' + (nb - 10);
	else
		res = nb + '0';
	c = &res;
	write (1, c, 1);
}

int	print_chars_hex(char *addr_0, int index)
{
	int	max_line_size;

	max_line_size = 0;
	while (addr_0[index] != '\0' && addr_0[index + 1] != '0')
	{
		if (max_line_size >= 8)
			break ;
		get_hex(addr_0[index], 0);
		get_hex(addr_0[index + 1], 0);
		write(1, " ", 1);
		max_line_size++;
		index = index + 2;
	}
	return (index);
}

void	print_chars_text(void *addr)
{
	int		index;
	char	*addr_0;

	addr_0 = (char *)addr;
	index = 0;
	while (addr_0[index] != '\0' && index < 16)
	{
		if (addr_0[index] < 32 || addr_0[index] > 126)
			write(1, ".", 1);
		else
			write(1, &addr_0[index], 1);
		index++;
	}
}

void	print_zeros(unsigned int nb, int zeros)
{
	while (nb)
	{
		nb = nb / 16;
		zeros--;
	}
	while (zeros)
	{
		write (1, "0", 1);
		zeros--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	char			*addr_0;

	if (size == 0)
		return (addr);
	addr_0 = (char *)addr;
	index = 0;
	while (index < size)
	{
		print_zeros((unsigned int)addr, 16);
		get_hex((unsigned int)addr, 0);
		write(1, ": ", 2);
		index = print_chars_hex(addr_0, index);
		print_chars_text(addr);
		addr = addr + 16;
		write(1, "\n", 1);
	}
	return (addr);
}
