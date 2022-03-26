/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:55:05 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/20 08:55:07 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x) ((x < 0) ? - x : x)
#endif

//#include <stdio.h>
//
//#include "ft_abs.h"
//
// int    main(void)
// {
//     int    index;
//
//     index = -5;
//     while (index < 5)
//     {
//         printf("macros::abs(%d) = %d\n", index, ABS(index));
//         index++;
//     }
// } 