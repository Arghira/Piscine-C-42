/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 13:00:19 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/28 19:54:47 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] <= 'j')
				str[i] = str[i] + 16;
			else if (str[i] > 'j')
				str[i] = str[i] - 10;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] <= 'J')
				str[i] = str[i] + 16;
			else if (str[i] > 'J')
				str[i] = str[i] - 10;
		}
		i++;
	}
	return (str);
}
