/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 15:55:30 by aarghira          #+#    #+#             */
/*   Updated: 2018/10/02 16:36:57 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;
	int k;
	int j;

	k = 0;
	i = 0;
	j = i + 1;
	while (i < lenght)
	{
		k = (*f)(tab[i], tab[j]);
		if (k > 0)
			return (0);
		i++;
		j++;
	}
	return (1);
}
