/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarghira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 13:11:27 by aarghira          #+#    #+#             */
/*   Updated: 2018/09/30 19:13:16 by aarghira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

void	ft_putstr(char *str);

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0

# endif

typedef unsigned char	t_bool;

t_bool	ft_is_even(int nbr);

# ifndef EVEN
#  define EVEN(nbr) (nbr % 2 == 0)

# endif

# ifndef EVEN_MSG
#  define EVEN_MSG "I have a pair number of arguments.\n"

# endif

# ifndef ODD_MSG
#  define ODD_MSG "I have an impair number of arguments.\n"

# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

#endif
