/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   feo.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:22:30 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/16 12:03:19 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char a[] = "42salut, cHmHGnt tu vAs ? 42mYtes quUra-deux; cifJIowio+ifjio+jiof";
	printf("before\t:%s\n", a);
	printf("after\t:%s\n" ,ft_strcapitalize(a));
}
*/
int	upper(char str);
int	lower(char str);
int	numeric(char str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (upper(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (lower(str[i]) == 0 && numeric(str[i]) == 0 && upper(str[i]) == 0)
		{
			if (lower(str[i + 1]) == 1)
				str[i + 1] = str[i +1] - 32;
		}
		i++;
	}
	if (lower(str[0]) == 1)
		str[0] = str[0] - 32;
	return (str);
}

int	upper(char str)
{
	if (str < 65 || 90 < str)
	{
		return (0);
	}
	else
		return (1);
}

int	lower(char str)
{
	if (str < 97 || 122 < str)
	{
		return (0);
	}
	else
		return (1);
}

int	numeric(char str)
{
	if (str < 48 || 57 < str)
	{
		return (0);
	}
	else
		return (1);
}
