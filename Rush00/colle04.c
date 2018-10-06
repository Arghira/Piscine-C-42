/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 13:13:37 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/24 18:49:04 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle04(int x, int y)
{
	int c1;
	int l1;

	c1 = x;
	l1 = y;
	y = 1;
	while (y <= l1)
	{
		x = 1;
		while (x <= c1)
		{
			if ((x == 1 && y == 1) || (x == c1 && y == l1 && l1 > 1 && c1 > 1))
				ft_putchar('A');
			else if ((x == 1 && y == l1) || (x == c1 && y == 1))
				ft_putchar('C');
			else if (x > 1 && x < c1 && y > 1 && y < l1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
