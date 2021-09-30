/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:07:47 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/16 20:07:49 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 58)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* int	main(void)
{
	char	*str;
	int		res;

	str = "1234";
	res = ft_str_is_numeric(str);
	printf("should be 0; %d\n", res);
}
 */