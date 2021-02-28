/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:36:08 by rramli            #+#    #+#             */
/*   Updated: 2021/02/28 19:36:10 by rramli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int*fourth(int a)
{
	static int	num[5][5];

	num[1][0] = 3;
	num[1][1] = 1;
	num[1][2] = 2;
	num[1][3] = 3;
	num[2][0] = 4;
	num[2][1] = 1;
	num[2][2] = 2;
	num[2][3] = 3;
	num[2][4] = 4;
	num[3][0] = 4;
	num[3][1] = 1;
	num[3][2] = 2;
	num[3][3] = 3;
	num[3][4] = 4;
	num[4][0] = 1;
	num[4][1] = 4;
	return (num[a]);
}
