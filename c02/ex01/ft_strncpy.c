/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:35:51 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/20 11:56:14 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
    char	a[]="fejiwo";
    char	b[]="hfieow";
    int		c =3;
	printf("before\nchange_time:%d\nfirst_
			argument:%s\nsecond_argument:%s\n", c, a, b);
    ft_strncpy(a, b, c);
    printf("after\nchange_time:%d\nfirst_
			argument:%s\nsecond_argument:%s\n", c, a, b);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
