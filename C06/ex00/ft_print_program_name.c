/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 08:41:02 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/14 08:41:03 by ccaluwe          ###   ########.fr       */
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
	if (argc > 0)
	{
		ft_putstr(argv[0]);
	}
	write(1, "\n", 1);
}
