/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:50:56 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/20 08:50:58 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define EVEN(x) x % 2 == 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
#endif

// #include "ft_boolean.h"
// void ft_putstr(char *str)
// {
// 	while (*str)
// 	write(1, str++, 1);
// }
// t_bool ft_is_even(int nbr)
// {
// 	return ((EVEN(nbr)) ? TRUE : FALSE);
// }
// int main(int argc, char **argv)
// {
// 	(void)argv;
// 	if (ft_is_even(argc - 1) == TRUE)
// 		ft_putstr(EVEN_MSG);
// 	else
// 		ft_putstr(ODD_MSG);
// 	return (SUCCESS);
// }