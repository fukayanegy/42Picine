/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:55:36 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/16 11:29:46 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a[] = "4793fehiw287";
	printf("text:%s\nreturn_value:%d\n", a, ft_str_is_numeric(a));
	return(0);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || 57 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
