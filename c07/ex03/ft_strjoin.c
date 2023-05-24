/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:57:22 by etakaham          #+#    #+#             */
/*   Updated: 2023/02/27 22:13:49 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

/*
int	main(void)
{
	char	*strs[3];
	char	sep[] = "123";

	strs[0] = "ABS";
	strs[1] = "ddd";
	strs[2] = "uuu";

	printf("%s\n", ft_strjoin(3, strs, sep));
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*retsor;
	int		counter[3];

	retsor = malloc(sizeof(strs));
	if (retsor == NULL)
		return ("error");
	counter[0] = 0;
	counter[1] = 0;
	while (counter[0] < size)
	{
		counter[2] = 0;
		while (strs[counter[0]][counter[2]] != '\0')
			retsor[counter[1]++] = strs[counter[0]][counter[2]++];
		counter[2] = 0;
		if (counter[0] != size - 1)
		{
			while (sep[counter[2]] != '\0')
				retsor[counter[1]++] = sep[counter[2]++];
		}
		counter[0]++;
	}
	retsor[counter[1]] = '\0';
	return (retsor);
}
