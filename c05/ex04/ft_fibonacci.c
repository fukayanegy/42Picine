/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:52:35 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 10:14:15 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_fibonacci(int index);
int	main(void)
{
	int a;
	printf("---------input number.-------\n");
	scanf("%d", &a);
	printf("\n--------answer--------\n");
	printf("%d\n", ft_fibonacci(a));
	printf("-----fibonacci------\n0,1,1,2,3,5,8,13,21,34...");
}
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (0);
}
