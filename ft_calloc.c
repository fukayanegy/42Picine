/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:36:32 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/25 20:36:34 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s_sub;

	if (size != 0)
	{
		if (nmemb > SIZE_MAX / size)
			return (NULL);
	}
	s_sub = malloc(nmemb * size);
	if (s_sub == NULL)
		return (NULL);
	ft_bzero(s_sub, nmemb * size);
	return (s_sub);
}
