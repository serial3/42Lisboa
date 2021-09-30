/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:07:02 by dromao-l          #+#    #+#             */
/*   Updated: 2021/09/16 17:07:09 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/* int	main(void)
{
	char	*src;
	char	dest_0[26];

	src = "teste1234567";
	printf("Source: %s\n", src);
	ft_strncpy(dest_0, src, 26);
	printf("Copied[9]: %s", dest_0);
}
 */