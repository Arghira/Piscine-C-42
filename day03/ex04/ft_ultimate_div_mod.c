/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 12:18:36 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/21 12:34:33 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int t;
	int t2;

	t = *a / *b;
	t2 = *a % *b;
	*a = t;
	*b = t2;
}
