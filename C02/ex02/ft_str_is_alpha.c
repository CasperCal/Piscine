/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:22:45 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/08 10:22:47 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 'a'
				|| str[count] > 'z') && (str[count] < 'A' || str[count] > 'Z'))
		{
			return (0);
		}
		count ++;
	}
	return (1);
}
