/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:06:20 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/18 04:40:26 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	a[] = "";
	printf("text:%s\nreturn_value:%d\n", a, ft_str_is_uppercase(a));
	return(0);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || 90 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
