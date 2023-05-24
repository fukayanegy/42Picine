/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:19:04 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/23 19:07:34 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_charnum(char a[]);

int	main(int argc, char *argv[])
{
	int	a;

	a = argc;
	write(1, argv[0], ft_charnum(argv[0]));
	write(1, "\n", 1);
	return (0);
}

int	ft_charnum(char a[])
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}
