/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 21:21:43 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/27 18:42:40 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
	{
		a = NULL;
		return (a);
	}
	else
	{
		a = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			a[i] = min;
			i++;
			min++;
		}
	}
	return (a);
}
