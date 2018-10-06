/* ************************************************************************** **                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:50:58 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/25 22:38:22 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	if (!to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (to_find[j] != '\0') && (str[i + j] != '\0'))
		{	 
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (NULL);
}

int main()
{
	char c[] = "Ana Are merere";
	char a[] = "Ana";
	printf("%s", ft_strstr(c, a));
	return (0);
}
