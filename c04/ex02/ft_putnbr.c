/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:00:57 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 09:31:29 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

void ft_putnbr(int nb);

int	main(void)
{
    int a = 2147483647;
	int b = -2147483648;
	int c = 0;
    int d = 63786426;
	int e = -3773;
	int f = 39283297;
    ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	ft_putnbr(c);
	printf("\n");
    ft_putnbr(d);
	printf("\n");
	ft_putnbr(e);
	printf("\n");
	ft_putnbr(f);
}
*/
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb <= 9)
	{
		num = '0' + nb;
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
