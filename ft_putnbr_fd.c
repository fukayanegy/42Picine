/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:40:07 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/26 00:35:43 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_single(int n, int fd)
{
	char	n_cha;

	if (n < 10)
	{
		n_cha = '0' + n;
		ft_putchar_fd(n_cha, fd);
		return ;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		i = -1 * (long)n;
		ft_putchar_fd('-', fd);
	}
	else
		i = (long)n;
	if (i < 10)
	{
		ft_putnbr_single(i, fd);
		return ;
	}
	ft_putnbr_fd(i / 10, fd);
	ft_putnbr_fd(i % 10, fd);
}
