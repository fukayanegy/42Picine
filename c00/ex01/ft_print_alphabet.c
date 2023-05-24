/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:35:16 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/14 21:02:56 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);
/*
int main(void)
{
	ft_print_alphabet();
	return 0;
}
*/

void	ft_print_alphabet(void)
{
	int		point;
	char	a;

	point = 0;
	while (point < 26)
	{
		a = 'a' + point;
		write(1, &a, 1);
		point++;
	}
}
