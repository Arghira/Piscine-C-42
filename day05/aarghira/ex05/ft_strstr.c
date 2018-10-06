/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:50:58 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/25 21:01:58 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
