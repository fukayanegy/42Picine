/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:52:43 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/27 11:48:15 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
int					ft_strlen(char *str);
char				*ft_strdup(char *src);
void				ft_show_tab(struct s_stock_str *par);
/*
int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*moji;
	int					i;

	moji = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (moji == NULL)
		return (NULL);
	while (i < ac)
	{
		moji[i].size = ft_strlen(av[i]);
		moji[i].str = av[i];
		moji[i].copy = ft_strdup(av[i]);
		i++;
	}
	moji[i].str = NULL;
	moji[i].size = 0;
	moji[i].copy = NULL;
	return (moji);
}
