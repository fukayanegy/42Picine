/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:40:32 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/27 21:43:38 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
int		ft_p(int a, int b);
int		cha_check(char *cha);
int		ft_putnbr_base(int num, char *nb, char *retuchar, int b);

int	ft_putnbr_base(int num, char *nb, char *retuchar, int b)
{
	long	eito[3];

	eito[2] = 0;
	if (b % 2 == 1)
	{
		retuchar[eito[2]] = '-';
		eito[2]++;
	}
	eito[0] = 1;
	while (num / eito[0] != 0)
	{
		eito[0] = eito[0] * ft_strlen(nb);
	}
	eito[0] = eito[0] / ft_strlen(nb);
	while (eito[0] > 0)
	{
		eito[1] = num / eito[0];
		retuchar[eito[2]] = nb[eito[1]];
		num = num % eito[0];
		eito[0] = eito[0] / ft_strlen(nb);
		eito[2]++;
	}
	retuchar[eito[2]] = '\0';
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
