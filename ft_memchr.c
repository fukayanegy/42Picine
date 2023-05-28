/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:40:07 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/25 22:17:12 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_sub;
	size_t	i;

	s_sub = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_sub[i] == (char)c)
		{
			s_sub += i;
			return (s_sub);
		}
		i++;
	}
	return (NULL);
}
