/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:08:58 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/25 16:31:18 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*a;

	i = 0;
	a = 0;
	if (c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			a = (char *)&s[i];
		i++;
	}
	return (a);
}
