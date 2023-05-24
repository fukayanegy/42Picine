/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:22:31 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/22 01:14:20 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	a[20] = "fewafweafwa";
	char	b[20] = "aa";
	unsigned int		c = 3;
	strncat(a, b, c);
	printf("自作\n%s\n\n", a);

	char	d[20] = "fewafweafwa";
	char	e[20] = "aa";
	unsigned int		f = 3;
	ft_strncat(d, e, f);
	printf("オリジナル\n%s\n", d);
}
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
