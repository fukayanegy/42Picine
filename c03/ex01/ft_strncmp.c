/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:57:02 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/22 05:26:57 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char	a[] = "abc";
	char	b[] = "abd";
	int		c = 3;
	printf("自作　　　%d\n", ft_strncmp(a, b, c));
	printf("オリジナル%d\n", strncmp(a, b, c));
	char	d[] = "%%$%";
	char	e[] = "fewa";
	int		f = 3;
	printf("自作　　　%d\n", ft_strncmp(d, e, f));
	printf("オリジナル%d\n", strncmp(d, e, f));
	char	g[] = "fewbgs";
	char	h[] = "fewahtehrdydrgesrgse";
	int		i = 3;
	printf("自作　　　%d\n", ft_strncmp(g, h, i));
	printf("オリジナル%d\n", strncmp(g, h, i));
	return (0);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;

	i = 0;
	a = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		a = s1[i] - s2[i];
		if (a != 0)
			return (a);
		i++;
	}
	return (a);
}
