/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:05:45 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 10:21:13 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
int ft_sqrt(int nb);

int main(void)
{
	int a;
	printf("input number\n");
	scanf("%d", &a);
	printf("%d\n", ft_sqrt(a));
	return 0;
}
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46341)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
