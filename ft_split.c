/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:27:29 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/28 19:00:03 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_split(char *s_sub, char c)
{
	size_t	ans;
	size_t	i;

	ans = 0;
	i = 0;
	while (s_sub[i] != '\0')
	{
		if (s_sub[i] == c)
			ans++;
		i++;
	}
	return (ans);
}

void	split_support(char *s_sub, char c, char **ans)
{
	size_t	i;
	size_t	k;
	size_t	f;

	i = 0;
	k = 0;
	f = 1;
	while (i < ft_strlen(s_sub))
	{
		if (s_sub[i] != c)
			ans[k][f - 1] = s_sub[i];
		else if (s_sub[i] == c && s_sub[i + 1] != c)
		{
			k++;
			f = 0;
		}
		i++;
		f++;
	}
	ans[k + 1] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	char	*s_sub;
	size_t	i;

	s_sub = ft_strtrim(s, &c);
	ans = (char **)ft_calloc(count_split(s_sub, c) + 2, sizeof(char *));
	if (*s == '\0')
	{
		ans[0] = NULL;
		return (ans);
	}
	i = 0;
	while (i < count_split(s_sub, c) + 1)
		ans[i++] = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	split_support(s_sub, c, ans);
	return (ans);
}
