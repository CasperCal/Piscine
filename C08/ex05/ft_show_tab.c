/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:59:57 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/20 09:59:58 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_num(int num)
{
	if (num > 9)
	{
		ft_put_num(num / 10);
	}
	ft_putchar(48 + num % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_put_str(par[i].str);
		write(1, "\n", 1);
		ft_put_num(par[i].size);
		write(1, "\n", 1);
		ft_put_str(par[i].copy);
		write(1, "\n", 1);
		i ++;
	}
}

// #include <stdlib.h>
//
// int	ft_strlen(char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
//
// char	*ft_strdup(char *src)
// {
// 	int		c;
// 	char	*dest;
// 	int		strl;
//
// 	c = 0;
// 	strl = 0;
// 	while (src[strl] != '\0')
// 	{
// 		strl++;
// 	}
// 	dest = (char *)malloc((strl + 1) * sizeof(char));
// 	if (!dest)
// 		return (0);
// 	while (c <= strl)
// 	{
// 		dest[c] = src[c];
// 		c ++;
// 	}
// 	dest[c] = '\0';
// 	return (dest);
// }
//
// struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int					i;
// 	struct s_stock_str	*tab;
//
// 	i = 0;
// 	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
// 	if (!tab)
// 		return (0);
// 	while (i < ac)
// 	{
// 		tab[i].size = ft_strlen(av[i]);
// 		tab[i].str = av[i];
// 		tab[i].copy = ft_strdup(av[i]);
// 		i++;
// 	}
// 	tab[i].str = 0;
// 	return (tab);
// }
//
// #include <stdio.h>
//
// int main()
// {
// 	char *lol[3];
// 	lol[0] = "yes";
// 	lol[1] = "yessaie";
// 	lol[2] = "hon hon gaston";
// 	t_stock_str *prout = ft_strs_to_tab(3, lol);
// 	ft_show_tab(prout);
// }