/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:47:23 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/24 21:22:30 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	k;

	k = 0;
	i = 0;
	while (src[i] != '\0' && k < n)
	{
		dest[i] = src[i];
		i++;
		k++;
	}
	while ((dest[i] != '\0') && (k == n))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
