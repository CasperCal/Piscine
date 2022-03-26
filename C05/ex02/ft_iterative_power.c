/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:38:46 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/12 12:38:47 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb = n * nb;
		power --;
	}
	return (nb);
}

// #include <stdio.h>
// int main(void)
// {
// 	int test;
// 	test = ft_iterative_power(3, 3);
// 	printf("%d", test);
// }