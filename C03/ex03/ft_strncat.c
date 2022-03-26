/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:24:30 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 12:24:32 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cend;
	unsigned int	ccopy;

	ccopy = 0;
	cend = 0;
	while (dest[cend] != '\0')
	{
		cend ++;
	}
	while (src[ccopy] != '\0' && ccopy < nb)
	{	
		dest[cend + ccopy] = src[ccopy];
		ccopy ++;
	}
	dest[cend + ccopy] = '\0';
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//
//int		main(void)
//{
//	char	*str_base;
//	char	dest[100];
//	char	dest2[100];
//	char	*src;
//	int		index;
//
//	str_base = "Hello ";
//	src = "World!!!!!!";
//	index = 0;
//	while (index < 6)
//	{
//		dest[index] = str_base[index];
//		dest2[index] = str_base[index];
//		index++;
//	}
//	printf("c  : %s$\n", strncat(dest, src, 5));
//	printf("ft : %s$\n", ft_strncat(dest2, src, 5));
//}