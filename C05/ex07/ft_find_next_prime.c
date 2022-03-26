/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:09:17 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/13 08:09:21 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count <= nb / 2)
	{
		if (nb % count == 0)
			return (0);
		count ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf("-10 = %d (2)\n", ft_find_next_prime(-10));
// 	printf(" 0 = %d (2)\n", ft_find_next_prime(0));
// 	printf(" 1 = %d (2)\n", ft_find_next_prime(1));
// 	printf(" 2 = %d (2)\n", ft_find_next_prime(2));
// 	printf(" 3 = %d (3)\n", ft_find_next_prime(3));
// 	printf(" 4 = %d (5)\n", ft_find_next_prime(4));
// 	printf(" 5 = %d (5)\n", ft_find_next_prime(5));
// 	printf(" 6 = %d (7)\n", ft_find_next_prime(6));
// 	printf(" 7 = %d (7)\n", ft_find_next_prime(7));
// 	printf(" 8 = %d (11)\n", ft_find_next_prime(8));
// 	printf(" 9 = %d (11)\n", ft_find_next_prime(9));
// 	printf(" 10 = %d (11)\n", ft_find_next_prime(10));
// 	printf(" test = %d (unknown)\n", ft_find_next_prime(2147483647));
// }