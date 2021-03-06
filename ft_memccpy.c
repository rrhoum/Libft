/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:26:39 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/19 18:52:58 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)src;
	while (i < n)
	{
		if (ptr[i] == c)
			return (&((char *)dest)[i + 1]);
		((char *)dest)[i] = ptr[i];
		i++;
	}
	return (NULL);
}
