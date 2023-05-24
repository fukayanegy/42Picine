/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:51:28 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/17 11:28:00 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
int ft_strlen(char *cha);

int main(void)
{
	char a[] = "fewijio";
	printf("%d", ft_strlen(a));
	return (0);
}
*/
int	ft_strlen(char	*cha)
{
	int	i;

	i = 0;
	while (cha[i] != '\0')
	{
		i++;
	}
	return (i);
}
