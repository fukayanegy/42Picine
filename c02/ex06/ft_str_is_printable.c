/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:10:34 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/18 04:11:24 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	a[] = "";
	printf("text;%s\nreturn_value:%d\n", a, ft_str_is_printable(a));
	return(0);
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 127 <= str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
