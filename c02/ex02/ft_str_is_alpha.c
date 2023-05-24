/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:29:15 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/16 11:23:05 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	a[] = "fejfewji";
	printf("text:%s\nreturn_value:%d\n", a,  ft_str_is_alpha(a));
	return(0);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (90 < str[i] && str[i] < 97) || 122 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
