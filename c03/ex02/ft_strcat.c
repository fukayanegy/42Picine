/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:30:22 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/22 01:13:51 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *str);

int main(void)
{
	char a[] = "abcde";
	char b[] = "fghij";
	printf("before\n\ta:%s\n\tb:%s\n",a, b);
	ft_strcat(a, b);
	printf("after\n\t%s\n",a);
	char c[] = "abcde";
	char d[] = "fghij";
	strcat(c, d);
	printf("after\n\t%s\n",c);
	return 0;
}
*/
char	*ft_strcat(char *dest, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
