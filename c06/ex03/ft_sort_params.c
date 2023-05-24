/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:34:16 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/23 19:12:11 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_strswap(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);

// int	main(int argc, char **argv)
// {
//     int		i;
//     int		k;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		k = 1;
// 		while (k < (argc - 1))
// 		{
// 			ft_strswap(argv[k], argv[k+1]);
// 			k++;
// 			printf("%d\n", ft_strcmp(argv[k], argv[k + 1]));
// 		}
// 		i++;
// 	}
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_putstr(argv[i]);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	return (0);
// }

int main(void)
{
	char	a[] = "aaa";
	char	b[] = "bbbb";
	ft_strswap(a, b);
	printf("a:%s\nb:%s\n", a, b);
	return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
    while (str[i] != '\0')
    {
        ft_putchar((str[i]));
        i++;
    }
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] || s1[i] == '\0' || s2[i] == '\0')
		i++;
    return (s1[i] -s2[i]);
}

void	ft_strswap(char *s1, char *s2)
{
	char	*copy;

	copy = s1;
	s1 = s2;
	s2 = copy;
}