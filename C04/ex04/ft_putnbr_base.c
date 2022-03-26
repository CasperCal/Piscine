/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:58:55 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/11 11:58:56 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_check(char *base)
{
	int	count;
	int	index;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == '-' || base[count] == '+' || base[count] < 32)
			return (0);
		index = count + 1;
		while (base[index] != '\0')
		{
			if (base[index] == base[count])
				return (0);
			index++;
		}
		count ++;
	}
	if (count <= 1)
		return (0);
	return (1);
}

void	ft_put_base(int nbr, char *base, unsigned int lbase)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = -1 * nbr;
	}
	else
		n = nbr;
	if (n < lbase)
		write(1, &(base[nbr % lbase]), 1);
	else
	{
		ft_put_base(n / lbase, base, lbase);
		ft_put_base(n % lbase, base, lbase);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	lbase;

	lbase = 0;
	if (ft_base_check(base) == 1)
	{
		while (base[lbase] != '\0')
		{
			lbase++;
		}
		ft_put_base(nbr, base, lbase);
	}
}

//#include <stdio.h>
//#include <string.h>
//
//int		main(void)
//{
//	ft_putnbr_base(-123456, "Casper");
//	printf("\n");
//	fflush(stdout);
//	ft_putnbr_base(-2147483648, "0123456789");
//	printf("\n");
//	fflush(stdout);
//	ft_putnbr_base(10, "01");
//}