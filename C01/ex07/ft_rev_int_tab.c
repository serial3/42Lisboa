/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:43:24 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/14 19:43:26 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	save;
	int	index;

	index = 0;
	while (index < size / 2)
	{
		save = tab[size - index - 1];
		tab[size - index - 1] = tab[index];
		tab[index] = save;
		index++;
	}
}
/* int  main(void)
{
    int	a[6] = {1,2,3,4,5,6};
    ft_rev_int_tab(a, 6);
    printf("%d", *a);
	printf("%d", *(a + 1));
    printf("%d", *(a + 2));
    printf("%d", *(a + 3));
    printf("%d", *(a + 4));
    printf("%d", *(a + 5));
} */