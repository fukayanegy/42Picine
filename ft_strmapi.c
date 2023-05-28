/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:37:28 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/28 16:04:23 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*ans;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	ans = ft_calloc(ft_strlen(s), sizeof(char));
	i = 0;
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	return (ans);
}
