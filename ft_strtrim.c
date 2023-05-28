/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:34:18 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/28 12:34:25 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtrim_start(char const *s1, char const *set, size_t *start)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s1))
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	*start = i;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	i;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	ft_strtrim_start(s1, set, &start);
	while (end > 0)
	{
		if (ft_strchr(set, s1[end]) == NULL)
			break ;
		end--;
	}
	ans = ft_calloc(end - start + 2, sizeof(char));
	i = 0;
	while (start <= end)
	{
		ans[i] = s1[start];
		i++;
		start++;
	}
	return (ans);
}
