/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 13:10:02 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/21 13:16:23 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putstr(char *str)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (str[i] != NULL)
	{
		k++;
		i++;
	}
	return (k);
}
