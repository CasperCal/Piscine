/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:44:17 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/11 10:44:19 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count ++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	index = 0;
	destsize = ft_strlen(dest);
	if (size <= destsize)
	{
		return (size + ft_strlen(src));
	}
	while (index + destsize + 1 < size && src[index] != '\0')
	{
		dest[index + destsize] = src[index];
		index++;
	}
	dest[index + destsize] = '\0';
	return (destsize + index);
}

//#include <stdio.h>
//#include <string.h>
//
//int				main(void)
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
//	printf("ftsize10:return:%d\tedit:%s\n", ft_strlcat(dest, src, 10), dest);
//	printf("ftsize100:return:%d\tedit:%s\n", ft_strlcat(dest2, src, 100), dest2);
//}