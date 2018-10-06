/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:26:21 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/20 17:23:07 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char s[];
	int i;
	int semn;

	semn = n;
	i = 0;
	if( nb < 0)
	{
		nb = -nb;
	}
	do {
		s[i++] = n % 10 + '0';
	} while (( n /= 10) > 0);
	if(sign < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
	ft_putchar('\n');

	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}







	ft_putchar('\n');	
}

int main()
{
	ft_putnbr(11234);
	return (0);
}
