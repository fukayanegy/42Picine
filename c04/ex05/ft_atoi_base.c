/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:22:34 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/28 23:10:40 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi_base(char *str, char *base);
int	st(char *str);
int	po(int a, int b);
int	cha_check(char *cha);
int	aaa(char *str, char *base, int b);
/*
int	main(void)
{
	char    str[] = " \n  ---+++++--+-26272829";
	char    base[] = "01234556789";
	int		x;

	x = ft_atoi_base(str, base);
	printf("%d\n", x);
	return (0);
}
*/

int	ft_atoi_base(char *str, char *base)
{
	int	f;
	int	i;
	int	retunum;
	int	b;

	if (cha_check(base) == 1)
		return (0);
	b = aaa(str, base, 0);
	retunum = 0;
	f = 0;
	while (f < st(base))
	{
		i = 0;
		while (str[i++])
		{
			if (str[i] == base[f])
				retunum += po(st(base), st(str) - i - 1) * f;
		}
		f++;
	}
	if (b % 2 == 1)
		retunum *= -1;
	return (retunum);
}

int	st(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	po(int a, int b)
{
	int	num;

	num = 1;
	while (b)
	{
		num *= a;
		b--;
	}
	return (num);
}

int	cha_check(char *cha)
{
	int	i;
	int	j;

	i = 0;
	while (i < st(cha))
	{
		if (cha[i] == '+' || cha[i] == '-')
			return (1);
		j = i + 1;
		while (j < st(cha))
		{
			if (cha[i] == cha[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	aaa(char *str, char *base, int b)
{
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			b += 1;
		str++;
	}
	return (b);
}
