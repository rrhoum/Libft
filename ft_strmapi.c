/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 15:51:13 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/18 15:55:47 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = ft_strnew(ft_strlen(s));
		while (s[i] != '\0')
		{
			if (f != NULL)
				str[i] = f(i, (char)(s[i]));
			else
				str[i] = s[i];
			i++;
		}
	}
	return (str);
}
