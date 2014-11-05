/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:53:33 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/04 18:05:48 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;
	size_t i;

	len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
