/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:40:07 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/25 21:58:32 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_sub;
	char	*src_sub;

	dest_sub = (char *)dest;
	src_sub = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest_sub[i] = src_sub[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest_sub[n - i - 1] = src_sub[n - i - 1];
			i++;
		}
	}
	dest = (void *)dest_sub;
	return (dest);
}
