/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:51:57 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/12 12:51:59 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int test;
// 	test = ft_recursive_power(3, 3);
// 	printf("%d", test);
// }