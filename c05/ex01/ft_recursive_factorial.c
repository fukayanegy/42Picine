/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:23 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/22 01:04:29 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int a;
	printf("input number.\n");
	scanf("%d", &a);
	printf("\nanswer\n");
	printf("%d\n", ft_recursive_factorial(a));
	return (0);
}
*/
int	ft_recursive_factorial(int nb)
{
	int	a;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	a = 1;
	if (nb == 1)
		return (a);
	a = ft_recursive_factorial(nb - 1);
	return (nb * a);
}
