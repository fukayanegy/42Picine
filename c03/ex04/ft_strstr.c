/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:35:00 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/22 01:16:50 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char	a[30] = "fewafewafewa";
	char	b[40] = "";
	strstr(a, b);
	printf("自作\n%s\n\n", strstr(a,b));

	char	d[30] = "fewafewafewa";
	char	e[40] = "";
	ft_strstr(d, e);
	printf("オリジナル\n%s\n", strstr(d, e));
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
			{
				j = 0;
				while (str[i + j] == to_find[j] && to_find[j] != '\0')
					j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
			i++;
		}
		return (0);
	}
}
