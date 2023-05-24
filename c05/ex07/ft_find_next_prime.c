/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:56:05 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 10:17:28 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb);
/*
int	main(void)
{
	int a;
	printf("input number\n");
	scanf("%d", &a);
	printf("next prime\n%d\n", ft_find_next_prime(a));
	return 0;
}
*/

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = 2;
	if (nb < 46341)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			i++;
		}
	}
	else
	{
		while (i < 46341)
		{
			if (nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			i++;
		}
	}
	return (nb);
}
