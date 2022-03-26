/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:44:22 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/16 11:44:24 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*charptr;
	int		count;

	charptr = str;
	count = 0;
	while (*charptr != 0)
	{
		count++;
		charptr++;
	}
	return (count);
}

void	printsep(char **concatptr, char *sep)
{
	while (*sep)
	{
		**concatptr = *sep;
		sep++;
		*concatptr += 1;
	}
}

void	concatstrs(int size, char *concatptr, char **strs, char *sep)
{
	int	n;
	int	i;

	n = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
		{
			*concatptr = strs[n][i];
			concatptr++;
			i++;
		}
		if (n == size - 1)
			*concatptr = 0;
		else if (*sep)
			printsep(&concatptr, sep);
		n++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*con;
	int		nb;

	if (size)
	{
		nb = (strs[size - 1] - *strs) + ft_strlen(strs[size - 1]) + 1;
		str = (char *)malloc(nb + ((ft_strlen(sep) - 1) * (size - 1)));
	}
	else
	{
		str = malloc(1);
		*str = 0;
		return (str);
	}
	con = str;
	concatstrs(size, con, strs, sep);
	return (str);
}

// #include <stdio.h>
//
//
// int main()
// {
// 	char *tab[6];
// 	tab[0] = "coucou";
// 	tab[1] = "this";
// 	tab[2] = "is";
// 	tab[3] = "just";
// 	tab[4] = "a";
// 	tab[5] = " test";
// 	printf("%s\n", ft_strjoin(6, tab, "---"));
// 	return (0);
// }