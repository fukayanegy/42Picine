/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:10:22 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/21 09:36:32 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_putnbr_base(int nb, char num[]);
int	main(void)
{
	int a = 2147483647;
	char b[] = "0123456789";
	ft_putnbr_base(a,b);
}
*/
#include<unistd.h>

int	ft_strlen(char *str);
int	cha_check(char cha[]);

void	ft_putnbr_base(int nb, char num[])
{
	long	nb2;
	int		n;

	nb2 = (long)nb;
	n = ft_strlen(num);
	if (n < 2)
		return ;
	if (cha_check(num) == 1)
		return ;
	if (nb2 < 0)
	{
		nb2 = -nb2;
		write(1, "-", 1);
	}
	if (nb2 <= n - 1)
	{
		write(1, &num[nb2], 1);
	}
	else
	{
		ft_putnbr_base(nb2 / n, num);
		ft_putnbr_base(nb2 % n, num);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	cha_check(char cha[])
{
	int	i;
	int	j;

	i = 0;
	while (i < ft_strlen(cha))
	{
		if (cha[i] == '+' || cha[i] == '-')
			return (1);
		j = i + 1;
		while (j < ft_strlen(cha))
		{
			if (cha[i] == cha[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
