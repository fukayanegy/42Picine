/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:17:18 by etakaham          #+#    #+#             */
/*   Updated: 2023/03/02 02:34:09 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	array_long(char *str, char *charset)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (check(str, charset, 0) == 0)
		size++;
	i++;
	while (str[i])
	{
		if (check(str, charset, i) == 0)
		{
			if (check(str, charset, i - 1) == 1)
				size++;
		}
		i++;
	}
	return (size);
}

char	**store_to_tab(char **tiba, char *str, char *charset, int i)
{
	int	array_len;
	int	i_tmp;

	i_tmp = i;
	array_len = 0;
	while (check(str, charset, i_tmp) == 0 && str[i_tmp])
	{
		array_len++;
		i_tmp++;
	}
	*tiba = (char *)malloc(sizeof(char) * (array_len + 1));
	ft_strncpy(*tiba, &str[i], array_len);
	tiba++;
	return (tiba);
}

char	**ft_split(char *str, char *charset)
{
	char	**tiba;
	int		size;
	int		i;

	size = array_long(str, charset);
	tiba = (char **)malloc(sizeof(char *) * (size + 1));
	i = 0;
	while (str[i])
	{
		if (i == 0 && (check(str, charset, i) == 0))
			tiba = store_to_tab(tiba, str, charset, i);
		else if (check(str, charset, i) == 0)
		{
			if (check(str, charset, i - 1) == 1)
				tiba = store_to_tab(tiba, str, charset, i);
		}
		i++;
	}
	*tiba = 0;
	return (tiba - size);
}
/*
int	main(void)
{
	char	str[] = "/,as//riyuewhi//adfhlkh";
	char	charset[] = "/,";
	char	**ptr;

	ptr = ft_split(str, charset);
	if (*ptr == '\0')
		printf("NULL!!!");
	while (*ptr != '\0')
	{	
		printf("%s\n", *ptr);
		ptr++;
	}
	return (0);
}
*/
