/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:52:44 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/29 15:52:45 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*save;
	int		i;
	int		b;
	int		z;

	i = 0;
	b = 0;
	save = malloc(strs);
	if (save == NULL)
		return (0);
	while (b < size)
	{
		z = 0;
		while (strs[b][z] != '\0')
			save[i++] = strs[b][z++];
		z = 0;
		while (sep[z] != '\0' && b < size - 1)
			save[i++] = sep[z++];
		b++;
	}
	return (save);
}

/* int	main(void)
{
	char *text[4];

	text[0] = "Isto";
	text[1] = "é";
	text[2] = "um";
	text[3] = "teste";

	printf("%s\n", ft_strjoin(4, text, ". "));
} */