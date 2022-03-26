/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:01:05 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/14 09:01:07 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count ++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[argc - c]);
		write(1, "\n", 1);
		c ++;
	}
}
