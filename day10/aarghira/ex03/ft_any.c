/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:13:54 by aarghira          #+#    #+#             */
/*   Updated: 2018/10/01 20:36:58 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int j;

	i = 0;
	k = 0;
	while (tab[i])
	{
		k = (*f)(tab[i]);
		if (k == 1)
		{
			retrun(1);
		}
		i++;
	}
	return (0);
}
