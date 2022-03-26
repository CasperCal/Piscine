/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:28:22 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/08 10:28:24 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < '0' || str[count] > '9')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

//#include <stdio.h>

//int		main(void)
//{
//	char numeric[] = "0123456789";
//	char *p_num;
//	p_num = numeric;
//
//	char special[] = "0123456789_";
//	char *p_spe;
//	p_spe = special;
//
//	char empty[] = "";
//	char *p_emp;
//	p_emp = empty;
//
//	printf("-----\n");
//	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
//	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
//	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));
//
//	return (0);
//}