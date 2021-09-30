/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:16:26 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/28 15:16:27 by dromao-l         ###   ########.fr       */
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

int	*ft_range(int min, int max)
{
	int	a;
	int	*arr;

	arr = 0;
	a = 0;
	if (max > min)
	{
		arr = malloc(sizeof(int) * arraylen(min, max));
		if (arr == NULL)
			return (0);
		while (min != max)
		{
			arr[a] = min;
			a++;
			min++;
		}
	}
	else if (min >= max)
		return (NULL);
	return (arr);
}

/* int	main(void)
{
	int	*b;
	int	c;

	c = 0;
	b = ft_range(-5, 10);
	while (*b++ != 9)
	{
		printf("teste: %d \n", *b);
	}
} */