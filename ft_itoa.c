/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:40:07 by etakaham          #+#    #+#             */
/*   Updated: 2023/05/25 20:40:09 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort(char *a, char *b)
{
	char	sub;

	sub = *a;
	*a = *b;
	*b = sub;
}

char	*ft_char_sort(char *str)
{
	size_t	i;
	size_t	len;
	char	*ans;

	ans = malloc(12);
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		ans[i] = str[len - 1 - i];
		i++;
	}
	return (ans);
}

bool	ft_itoa_check(int *n, bool *mai)
{
	if (*n == -2147483648)
		return (false);
	else if (*n < 0)
	{
		*n *= -1;
		*mai = true;
	}
	else
		*mai = false;
	return (true);
}

char	*ft_itoa(int n)
{
	char	*ans;
	size_t	i;
	bool	mai;

	ans = malloc(12);
	if (!ft_itoa_check(&n, &mai))
		return ("-2147483648");
	i = 0;
	while (10 < n)
	{
		ans[i] = '0' + (n % 10);
		i++;
		n /= 10;
	}
	ans[i] = '0' + n;
	i++;
	if (mai)
		ans[i++] = '-';
	ans = ft_char_sort(ans);
	ans[i] = '\0';
	return (ans);
}
