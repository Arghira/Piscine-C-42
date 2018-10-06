/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:58:52 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/27 16:15:59 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base % 2 == 0)
		base = base / 2;
	else if (base % 2 == 1)
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}
