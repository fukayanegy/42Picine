/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:35:56 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/25 02:35:29 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char	a[] = "few";
	printf("%s\n", ft_strdup(a));
	return (0);
}
*/
#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*a;

	a = malloc(ft_strlen(src) + 1);
	if (a == '\0')
		return ("error");
	ft_strcpy(a, src);
	return (a);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
