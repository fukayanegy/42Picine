/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:57:49 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/28 13:09:11 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	che(char *str, const char *n, size_t i, size_t f)
{
	if ((str[i + f] == n[f] || n[f] == '\0'))
	{
		return (true);
	}
	else
		return (false);
}

char	*ft_strnstr_support(char *haystack_sub, const char *needle, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	while (i < len + 1)
	{
		if (haystack_sub[i] == needle[0])
		{
			f = 0;
			while (che(haystack_sub, needle, i, f) && i + f < len + 1)
			{
				if (needle[f] == '\0')
				{
					return (&haystack_sub[i]);
				}
				f++;
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_sub;

	if (haystack == NULL)
		return (NULL);
	haystack_sub = (char *)haystack;
	if (*needle == '\0')
		return (haystack_sub);
	return (ft_strnstr_support(haystack_sub, needle, len));
}
