/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:37:58 by aarghira          #+#    #+#             */
/*   Updated: 2018/10/01 20:42:15 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (tab[i])
	{
		if ((*f)(tab[i] == 1))
			k++;
		i++;
	}
	return (k);
}