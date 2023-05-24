/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:15:33 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/18 04:24:38 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

/*
int main(void)
{
    char a[]="fejiwo";
    char b[]="hfieow";
    int c =3;
	printf("before\nchange_time:%d\nfirst_argu
	ment:%s\nsecond_argument:%s\n", c, a, b);
    ft_strlcpy(a, b, c);
    printf("after\nchange_time:%d\nfirst_argum
	ent:%s\nsecond_argument:%s\n", c, a, b);
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
