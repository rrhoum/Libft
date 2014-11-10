/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:03:03 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/10 15:55:55 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strstr(const char *s11, const char *s22)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	i = 0;
	j = 0;
	s1 = (char *)s11;
	s2 = (char *)s22;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
			j++;
		else
		{
			i = (i - j);
			j = 0;
		}
		i++;
		if (!s2[j])
			return (&s1[i - j]);
	}
	return (NULL);
}
