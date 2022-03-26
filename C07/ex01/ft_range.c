/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:20:53 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/15 11:20:54 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	c;

	c = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range = (int *)malloc((max - min + 1) * sizeof(int));
	while (min < max)
	{
		range[c] = min;
		c++;
		min ++;
	}
	range[c] = '\0';
	return (range);
}

// #include <stdio.h>
//
//
// int main()
// {
// 	int *range = ft_range(5, 10);
// 	if (range == NULL)
// 	{
// 		printf("NULL pointer has been returned.\n");
// 		return (0);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	return (0);
// }