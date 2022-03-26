/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 07:31:22 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 07:31:26 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size != 0)
	{
		while (src[index] != '\0' && index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

// #include <stdio.h>

// 
//
// int		main(void)
// {
//	char src[] = "Source";
//	char dest[] = "";
//	unsigned int n;
//
//	n = 4;
//
//	printf("BEFORE\n\tsrc: %s\n\tsize: %d\n", src, n);
//
//    n = ft_strlcpy(dest, src, n);
//
//	printf("AFTER\n\tdes: %s\n\tsize: %d", dest, n);
//	return (0);
//}