/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intersectall.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:13:24 by rramli            #+#    #+#             */
/*   Updated: 2021/02/28 18:13:25 by rramli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_intersect(int a[], int b[])
{
	int	count_a;
	int	count_b;
	int	result;
	count_a = 1;
	count_b = 1;
	result = 5;
	while (count_a <= a[0])
  	{
      		while (count_b <= b[0])
      		{
        		if (a[count_a] == b[count_b]){
          			result = a[count_a];
        		}
        		count_b++;
      		}
    		count_a++;
    		count_b = 1;
  	}
	return (result);
}

int	ft_intersectall(int w[], int x[], int y[], int z[])
{
	int result;

	if ((ft_intersect(w, x) == ft_intersect(w, y) && ft_intersect(x, z))
  	{
    		result = ft_intersect(w, x);
  	}
  	else
  	{
    		result = 5;
  	} 
  	return (result);
}
