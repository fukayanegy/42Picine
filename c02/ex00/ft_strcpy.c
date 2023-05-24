/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:33:47 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/18 04:09:34 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
    char a[] = "abcdefg";
    char b[] = "asdfg";
    printf("before\na:%s\nb:%s\n", a, b);
    ft_strcpy(b, a);
    printf("after\na:%s\nb:%s\n", a, b);
    return(0);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
