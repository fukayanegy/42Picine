/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:37:43 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/25 21:37:44 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;

	ans = ft_calloc(ft_strlen(s), sizeof(char));
	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		ans[i] = s[start + i];
		i++;
	}
	return (ans);
}
