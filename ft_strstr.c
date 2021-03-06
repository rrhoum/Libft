/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:03:03 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/12 15:02:50 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*s11;
	char	*s22;

	i = 0;
	j = 0;
	s11 = (char *)s1;
	s22 = (char *)s2;
	if (s22[i] == '\0')
		return (&s11[0]);
	while (s11[i] != '\0')
	{
		if (s11[i] == s22[j])
			j++;
		else
		{
			i = (i - j);
			j = 0;
		}
		i++;
		if (!s22[j])
			return (&s11[i - j]);
	}
	return (NULL);
}
