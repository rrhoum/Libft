/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:19:20 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/07 15:17:12 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	char *str;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (str != NULL)
	{
		ft_strcpy(str, s);
		return (str);
	}
	else
		return (0);
}
