/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:55:36 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/16 14:55:38 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] > '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*src;
	char	dest[] = "";

	src = "Don't Panic!";
	printf("Source: %s\n", src);
	ft_strcpy(dest, src);
	printf("Copied: %s", dest);
}
 */