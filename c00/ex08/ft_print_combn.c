/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:30:14 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/14 20:31:01 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_printout(int *ketanum, int n);
void	ft_print_combn(int n);
/*
int main(void)
{
    ft_print_combn(1);
    return 0;
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printout(int *ketanum, int n)
{
	int	i;
	int	canornot;

	i = 1;
	canornot = 1;
	while (i < n)
	{
		if (ketanum[i] <= ketanum[i - 1])
			canornot = 0;
		i++;
	}
	if (canornot)
	{
		i = 0;
		while (i < n)
			ft_putchar(ketanum[i++] + '0');
		if (ketanum[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	ketanum[9];

	i = 0;
	while (i < n)
		ketanum[i++] = 0;
	while (ketanum[0] <= (10 - n) && 1 <= n && n < 10)
	{
		ft_printout(ketanum, n);
		i = n - 1;
		ketanum[i]++;
		while (i != 0 && 1 < n)
		{
			if (9 < ketanum[i])
			{
				ketanum[i - 1]++;
				ketanum[i] = 0;
			}
			i--;
		}
	}
}
