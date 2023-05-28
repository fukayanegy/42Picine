/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:37:20 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/28 12:37:38 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	char	*src_sub;

	if (dstsize == 0)
		return (ft_strlen(src));
	src_sub = (char *)src;
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i + dst_len < dstsize - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	if (dst_len < dstsize)
		return (dst_len + ft_strlen(src_sub));
	return (dstsize + ft_strlen(src_sub));
}
