/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:32:06 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/18 19:32:08 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	rtrn;

	i = 0;
	rtrn = 0;
	while ((s1[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			rtrn = s1[i] - s2[i];
			return (rtrn);
		}
		i++;
	}
	if ((s1[i] != s2[i]) && (i < n))
	{
		rtrn = s1[i] - s2[i];
		return (rtrn);
	}
	return (rtrn);
}

/* int	main(void)
{
	printf("%d\n", ft_strncmp("abdefg", "abdefG", 5));
}
 */