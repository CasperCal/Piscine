/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 08:00:55 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/15 08:00:57 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*dest;
	int		strl;

	c = 0;
	strl = 0;
	while (src[strl] != '\0')
	{
		strl++;
	}
	dest = (char *)malloc((strl + 1) * sizeof(char));
	while (c <= strl)
	{
		dest[c] = src[c];
		c ++;
	}
	dest[c] = '\0';
	return (dest);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char *test;
// 	char *dup;
//
// 	test = "Testtstststetete et vetdv evd tedv etdv tev dte";
// 	printf("test = %s\n", test);
// 	dup = ft_strdup(test);
// 	printf("dup  = %s\n", dup);
// 	free(dup);
// }