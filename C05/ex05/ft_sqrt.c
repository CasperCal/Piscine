/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:18:32 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/12 15:18:34 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb && n < 46341)
		{
			if (n * n == nb)
				return (n);
			n++;
		}
	}
	return (0);
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf("-10 = %d (0)\n", ft_sqrt(-10));
// 	printf("-1 = %d (0)\n", ft_sqrt(-1));
// 	printf(" 0 = %d (0)\n", ft_sqrt(0));
// 	printf(" 1 = %d (1)\n", ft_sqrt(1));
// 	printf(" 2 = %d (0)\n", ft_sqrt(2));
// 	printf(" 3 = %d (0)\n", ft_sqrt(3));
// 	printf(" 4 = %d (2)\n", ft_sqrt(4));
// 	printf(" 9 = %d (3)\n", ft_sqrt(9));
// 	printf(" 16 = %d (4)\n", ft_sqrt(16));
// 	printf(" 2147395600= %d (46340)\n", ft_sqrt(2147395600));	
// }