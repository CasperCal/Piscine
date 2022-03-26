/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:00:55 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/20 09:00:56 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		c;
	char	*dest;
	int		strl;

	c = 0;
	strl = 0;
	while (src[strl] != '\0')
	{
		strl++;
	}
	dest = (char *)malloc((strl + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (c <= strl)
	{
		dest[c] = src[c];
		c ++;
	}
	dest[c] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// #include <stdio.h>
//
// int main()
// {
// 	char *lol[3];
// 	int i = 0;
// 	lol[0] = "yes";
// 	lol[1] = "yessaie";
// 	lol[2] = "hon hon gaston";
// 	t_stock_str *prout = ft_strs_to_tab(3, lol);
// 	while (prout[i].str)
// 	{
// 		printf("%d, %s, %s\n", prout[i].size, prout[i].str, prout[i].copy);
// 		i++;
// 	}
// }