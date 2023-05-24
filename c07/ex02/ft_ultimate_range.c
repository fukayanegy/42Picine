/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:42:02 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/27 11:54:02 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int	i;
	int	min;
	int	max;
	int	diff;
	int	*range;
	int	res;

	printf("please input min\n");
	scanf("%d", &min);
	printf("please input max\n");
	scanf("%d", &max);

	diff = max - min;
	res = ft_ultimate_range(&range, min, max);

	printf("res:%d\n", res);
	i = 0;
	while(i < diff+1)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		array = (int *)malloc(sizeof(int) * (max - min));
		if (NULL == array)
			return (-1);
		i = 0;
		*range = array;
		while (i < (max - min))
		{
			array[i] = min + i;
			i++;
		}
		return (i);
	}
	return (-1);
}
