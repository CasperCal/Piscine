/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:35:22 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/12 12:35:24 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 0 && nb <= 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (0);
	}
}

//#include <stdio.h>
//int main(void)
//{
//	int test;
//	test = ft_recursive_factorial(5);
//	printf("%d", test);
//}