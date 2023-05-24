/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:07:00 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 10:22:21 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	int a;
	printf("input number.\n");
	scanf("%d", &a);
	int b;
	printf("input power number.\n");
	scanf("%d", &b);
	printf("\nanswer\n");
    printf("%d\n",ft_recursive_power(a, b));
	return 0;
}
*/
int	ft_recursive_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	a = 1;
	if (power == 0)
	{
		return (a);
	}
	a = ft_recursive_power(nb, power - 1);
	return (nb * a);
}
