/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:43:23 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 10:43:25 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (n > 0)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		if (s1[count] == '\0')
			return (0);
		count ++;
		n --;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//
//int		main()
//{
//	char s1[] = "I am here to test";
//	char s2[] = "I am different";
//	char s3[] = "I am";
//
//	printf("s12: %d, s21: %d",  ft_strncmp(s2, s3, 10), ft_strncmp(s1, s2, 3));
//	printf("\n\ns12: %d, s21: %d",  strncmp(s2, s3, 10), strncmp(s1, s2, 3));
//}