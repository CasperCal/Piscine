/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:57:17 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/20 08:57:18 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;

#endif

// #include "ft_point.h"
// void set_point(t_point *point)
// {
// 	point->x = 42;
// 	point->y = 21;
// }
// int main(void)
// {
// 	t_point point;
// 	set_point(&point);
// 	printf("%d, %d\n", point.x,  point.y );
// 	return (0);
// }