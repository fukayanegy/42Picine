/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:00:23 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/14 20:26:02 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

/*
int main(void)
{
	char a = 'a';
	ft_putchar(a);
	return 0;
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
