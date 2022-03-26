/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 08:32:23 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 08:32:24 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(unsigned char c)
{
	char *hex;
	
	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
	
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 127)
		{
			ft_printhex(str[count]);
		}
		else
		{
			ft_putchar(str[count]);
		}
		count ++;
	}
}

//int		main(void)
//{
//	char	*string;
//
//	string = "Coucou\n tu vas bien ?";
//	ft_putstr_non_printable(string);
//}