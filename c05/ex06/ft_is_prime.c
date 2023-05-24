/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:54:17 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 10:16:53 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int a;
	printf("input number\n");
	scanf("%d", &a);
	printf("%d\n", ft_is_prime(a));
	return 0;
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	if (nb < 46341)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	else
	{
		while (i < 46341)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}
