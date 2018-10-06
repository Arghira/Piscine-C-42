/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 17:34:15 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/22 18:49:27 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int first;
	int second;
	int next;
	int c;
	
	first = 0;
	second = 1;
	c = 0;
	for (c = 0; c < index; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
	}
	return (next);
}

int main()
{
	int n;
	n = ft_fibonacci(8);
	printf("%d",n);
	return (0);
}












