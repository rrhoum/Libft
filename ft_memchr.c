/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:17:15 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/17 16:05:19 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*s2;
	unsigned char	s1;

	i = 0;
	s2 = s;
	s1 = c;
	while (i < n)
	{
		if (s2[i] == s1)
		{
			return (&s2[i]);
		}
		i++;
	}
	return (NULL);
}
