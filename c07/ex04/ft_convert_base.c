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

int main(void)
{
	char a[]="    \n         -+-+++---dgf";
	char b[]="abcdefghij";
	char c[]="0123456789";
	printf("%s\n", ft_convert_base(a, b, c));
	return 0;
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		b;
	char	*retuchar;

	if (cha_check(base_from) == 1 || cha_check(base_to) == 1)
		return (NULL);
	b = 0;
	while ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			b += 1;
		nbr++;
	}
	retuchar = malloc(1);
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, retuchar, b);
	return (retuchar);
}

int	ft_atoi_base(char *str, char *base)
{
	int	f;
	int	i;
	int	retunum;

	retunum = 0;
	f = 0;
	while (f < ft_strlen(base))
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == base[f])
				retunum += ft_p(ft_strlen(base), ft_strlen(str) - i - 1) * f;
			i++;
		}
		f++;
	}
	return (retunum);
}

int	ft_p(int a, int b)
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
