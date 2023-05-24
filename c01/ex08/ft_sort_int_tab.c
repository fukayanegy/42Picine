/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:56:17 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/15 14:24:52 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_swap(int *a, int *b);
void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int number[] = {32, 12 , 54, 35, 57};
	ft_sort_int_tab(number, 5);
	for (int i = 0; i < 5; i++)
		printf("%d,", number[i]);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int f;

	i = 0;
	while (i < size)
	{
		f = 0;
		while (f < size)
		{
			if (tab[i + 1] < tab [i])
				ft_swap(&tab[i], &tab[i + 1]);
			f++;
		}
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
