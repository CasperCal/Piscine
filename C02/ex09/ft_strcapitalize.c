/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:16:52 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/08 14:16:55 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_stringlower(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	str = ft_stringlower(str);
	if (str[0] >= 'a' && str[0] <= 'z' )
	{
		str[0] = str[0] - 32;
	}
	while (str[count] != '\0')
	{
		if (str[count] < '0' || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || str[count] > 'z')
		{
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z' )
			{
				str[count + 1] = str[count + 1] - 32;
			}
		}	
		count++;
	}
	return (str);
}

//#include <stdio.h>
//
//int		main(void)
//{
//	char str1[] = "test TeSt TeST j-p\\j haha&dqsd qdqd";
//	
//	char str2[] = "";
//
//	char empty[] = "";
//
//	printf("\n-----\nBEF = %s", str1);
//	printf("\nAFT = %s\n", ft_strcapitalize(str1));
//	printf("\nBEF = %s", str2);
//	printf("\nAFt = %s\n", ft_strcapitalize(str2));
//	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
//}