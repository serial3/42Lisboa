/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:58:18 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/28 17:58:19 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	arraylen(int min, int max)
{
	int	result;

	result = 0;
	result = max - min;
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	s;

	s = arraylen(min, max);
	if (max > min)
	{
		*range = malloc(sizeof(int) * arraylen(min, max));
		if (*range == NULL)
			return (-1);
		a = 0;
		while (a < s)
		{
			*range = &min;
			a++;
			min++;
		}
	}
	else if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	return (s);
}

/* int	main( void )
{
	int	min;
	int	max;
	int	*range;
	int	bound;	min = 20;
	max = 124;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	//debug_dump_array(range, bound);
} */