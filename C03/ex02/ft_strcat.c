/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:21:51 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 11:21:54 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	cend;
	unsigned int	ccopy;

	cend = 0;
	ccopy = 0;
	while (dest[cend] != '\0')
	{
		cend ++;
	}
	while (src[ccopy] != '\0')
	{
		dest[cend + ccopy] = src[ccopy];
		ccopy ++;
	}
	dest[cend + ccopy] = '\0';
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//int		main(void)
//{
//	char	*str_base;
//	char	dest[100];
//	char	dest2[100];
//	char	*src;
//	int		index;
//
//	str_base = "Hello";
//	src = " World";
//	index = 0;
//	while (index < 6)
//	{
//		dest[index] = str_base[index];
//		dest2[index] = str_base[index];
//		index++;
//	}
//	printf("c  : %s$\n", strcat(dest, src));
//	printf("ft : %s$\n", ft_strcat(dest2, src));
//}