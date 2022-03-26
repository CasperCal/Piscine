/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:19:54 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/11 11:19:56 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minplus;
	int	res;
	int	count;

	minplus = 1;
	res = 0;
	count = 0;
	while (str[count] == ' ' || (str[count] >= 5 && str[count] <= 13))
		count ++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
		{
			minplus = minplus * -1;
		}
		count ++;
	}
	while (str[count] <= '9' && str[count] >= '0')
	{
		res = (10 * res) + (str[count] - 48);
		count ++;
	}
	return (res * minplus);
}

//#include <stdio.h>
//
//int		ft_atoi(char *str);
//
//int		main(void)
//{
//	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));
//
//}