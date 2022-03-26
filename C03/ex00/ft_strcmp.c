/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:03:43 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 10:03:44 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && s1[count] == s2[count])
	{
		count ++;
	}
	return (s1[count] - s2[count]);
}

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char *str1;
//	char *str2;
//
//	str1 = "123456789";
//	str2 = "987";
//	printf("c  : %d\n", strcmp(str1, str2));
//	printf("ft : %d\n", ft_strcmp(str1, str2));
//}
