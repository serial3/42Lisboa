/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:05:17 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/16 14:05:19 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	save;

	a = 0;
	while (a < size - 1)
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
	}
}
/* int	main(void)
{
	int	a[6] = {30,19,34,1,5,0};

	ft_sort_int_tab(a, 6);
	printf("%d", *a);
	printf("%d", *(a + 1));
    printf("%d", *(a + 2));
    printf("%d", *(a + 3));
    printf("%d", *(a + 4));
    printf("%d", *(a + 5));
}
 */