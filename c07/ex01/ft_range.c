/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:38:36 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/25 03:27:15 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	a;
	int	b;
	int c = 0;

	printf("please input min\n");
	scanf("%d", &a);
	printf("please input max\n");
	scanf("%d", &b);
	
	int	*d = ft_range(a, b);
	printf("---------------\n");
	while (c < b - a)
	{
		printf("%d\n", *(d + c));
		c++;
	}
}
*/
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (max - min <= 0)
		return (0);
	a = (int *)malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
