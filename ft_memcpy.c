/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:40:07 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/26 01:32:29 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_sub;
	char		*src_sub;

	dest_sub = (char *)dest;
	src_sub = (char *)src;
	i = 0;
	while (i < n)
	{
		dest_sub[i] = src_sub[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*ans = ft_memcpy(NULL, NULL, 0);
// }