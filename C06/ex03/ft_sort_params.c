/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 05:13:43 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/27 05:13:45 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	while (a < argc - 1)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		a++;
		write(1, "\n", 1);
	}
}

/* while (a < size - 1)
	{
		if (tab[a] > tab[a + 1])
		{
			save = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = save;
			a = 0;
		}
		else
		{
			a++;
		}
	} */