/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:48:18 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/14 21:02:26 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		point;
	char	num;

	point = 0;
	while (point < 10)
	{
		num = '0' + point;
		write (1, &num, 1);
		point++;
	}
}
