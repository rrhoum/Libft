/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhoum <rrhoum@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:37:36 by rrhoum            #+#    #+#             */
/*   Updated: 2014/11/05 16:49:08 by rrhoum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	s1;

	i = 0;
	s1 = s;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
