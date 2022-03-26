/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:04:39 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/14 09:04:45 by ccaluwe          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index ++;
	}
	return (s1[index] - s2[index]);
}

int	main(int argc, char **argv)
{
	int		c;
	char	*tmp;

	c = 1;
	while (c < argc - 1)
	{
		if (ft_strcmp(argv[c], argv[c + 1]) > 0)
		{
			tmp = argv[c];
			argv[c] = argv[c + 1];
			argv[c + 1] = tmp;
			c = 0;
		}
		c ++;
	}
	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c ++;
	}
	return (0);
}
