/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowrcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:01:56 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/18 04:40:06 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	a[] = "ifheuiw42la";
	printf("text:%s\nreturn_value:%d\n", a, ft_str_is_lowercase(a));
	return(0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || 122 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
