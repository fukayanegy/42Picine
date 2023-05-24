/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:14:08 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/20 07:57:22 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char a[] = "abcd567#$%WGB";
	printf("before:\t%s\n", a);
	printf("after:\t%s\n",ft_strupcase(a));
	return(0);
}
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
