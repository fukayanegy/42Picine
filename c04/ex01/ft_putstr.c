/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:59:40 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 09:07:13 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_putstr(char *str);
int	main(void)
{
	char a[] = "fewagre";
	ft_putstr(a);
	return (0);
}
*/
#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
