/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:37:17 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/25 22:21:11 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s_1_len;
	size_t	s_2_len;
	size_t	i;
	char	*ans;

	s_1_len = ft_strlen(s1);
	s_2_len = ft_strlen(s2);
	ans = malloc((sizeof(char)) * (s_1_len + s_2_len));
	i = 0;
	while (s1[i])
	{
		ans[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ans[s_1_len + i] = s2[i];
		i++;
	}
	return (ans);
}
