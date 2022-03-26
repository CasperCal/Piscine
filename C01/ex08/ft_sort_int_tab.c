/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:49:08 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/07 20:49:16 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			ft_swap(&tab[count], &tab[count + 1]);
			count = 0;
		}	
		else
		{
			count++;
		}
	}
}
