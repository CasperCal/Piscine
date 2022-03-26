/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:32:18 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/15 11:32:19 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*res;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	res = malloc(bound * sizeof(int));
	if (res == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = res;
	index = 0;
	while (min < max)
	{
		res[index] = min;
		index++;
		min++;
	}
	return (bound + 1);
}

// #include <stdio.h>
//
// int main()
// {
// 	int *range;
// 	int len;
//
// 	len = ft_ultimate_range(&range, 0, 10);
// 	printf("len = %d\n",len);
// 	if (!range)
// 	{
// 		printf("Pointer set to NULL.\n");
// 		return (0);
// 	}
// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	return (0);
// }