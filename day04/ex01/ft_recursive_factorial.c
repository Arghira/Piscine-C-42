/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 13:57:49 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/22 14:56:39 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		r = nb * ft_iterative_factorial(nb - 1);
		return (r);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (0);
}
