/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:45:06 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/14 21:01:12 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		point;
	char	a;

	point = 0;
	while (point < 26)
	{
		a = 'z' - point;
		write(1, &a, 1);
		point++;
	}
}
