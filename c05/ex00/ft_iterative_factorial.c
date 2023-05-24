/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:47:17 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/22 01:05:06 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int a;
	printf("input number.\n");
	scanf("%d", &a);
	printf("\nanswer\n");
	printf("%d\n", ft_iterative_factorial(a));
	return (0);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	a;
	int	b;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	a = 1;
	b = 1;
	while (a <= nb)
	{
		b = b * a;
		a++;
	}
	return (b);
}
