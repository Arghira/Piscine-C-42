/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 22:15:32 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/27 19:07:55 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*t;

	i = 0;
	if (min >= max)
		return (0);
	t = (int*)malloc(sizeof(int) * (max - min));
	if (t == NULL)
		return (0);
	while (min < max)
	{
		t[i] = min;
		i++;
		min++;
	}
	*range = t;
	return (i);
}
