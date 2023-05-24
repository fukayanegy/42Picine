/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:04:49 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 10:18:38 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int a;
	printf("input number.\n");
	scanf("%d", &a);
	int b;
	printf("input power number.\n");
	scanf("%d", &b);
	printf("\nanswer\n");
	printf("%d\n",ft_iterative_power(a, b));
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power < 0)
		return (0);
	i = 0;
	num = 1;
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}
