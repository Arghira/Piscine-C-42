/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 19:15:27 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/27 19:55:42 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*c;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	c = malloc(sizeof(char) * argc);
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			c[k] = argv[i][j];
			j++;
			k++;
		}
		if (i < (argc - 1))
			c[k] = '\n';
		j = 0;
		i++;
		k++;
	}
	c[k - 1] = '\0';
	return (c);
}
