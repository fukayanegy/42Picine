/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 22:04:38 by etakaham          #+#    #+#             */
/*   Updated: 2023/03/01 22:26:42 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int		q(char c, char *charset);
int		array_long(char *str, char *charset);
char	**ft_split(char *str, char *charset);
char	*tenki(char *str, char *charset, int i);

int	q(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	array_long(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	if (q(str[0], charset) == 0)
	{
		count = 1;
	}
	else
	{
		count = 0;
	}
	while (str[i])
	{
		if (q(str[i], charset) == 1 && q(str[i + 1], charset) == 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	*tenki(char *str, char *charset, int i)
{
	int		a;
	int		b;
	char	*retuchar;

	a = 0;
	while (q(str[a + i], charset) == 0 && str[a + i] != '\0')
	{
		a++;
	}
	retuchar = malloc((sizeof(char)) * (a + 1));
	b = 0;
	while (b < a)
	{
		retuchar[b] = str[i];
		b++;
		(i)++;
	}
	retuchar[b] = '\0';
	return (retuchar);
}

char	**ft_split(char *str, char *charset)
{
	printf("start\n");
	char	**retuchar2;
	int		numi;
	int		fuji;
	int		sai;
	int		mitina;

	mitina = array_long(str, charset);
	retuchar2 = malloc(sizeof(*retuchar2) * mitina + 1);
	numi = 0;
	fuji = 0;
	if (q(str[0], charset) == 0)
	{
		retuchar2[fuji++] = tenki(str, charset, numi++);
	}
	while (str[numi++])
	{
		//printf("nakami:%d\n", numi);
		if (q(str[numi], charset) == 1 && q(str[numi + 1], charset) == 0)
		{
			sai = numi + 1;
			retuchar2[fuji] = tenki(str, charset, sai);
			//printf("retuchar[%d]:%s\n", fuji, retuchar2[fuji]);
			fuji++;
			mitina--;
		}
	}
	retuchar2[fuji] = NULL;
	return (retuchar2);
}

int main(void)
{
	char a[]="IneNNINNNN";
	char b[]="I";
	char	**c;
    c = malloc(sizeof(char *) * 200);
	c = ft_split(a, b);
	for(int i=0; c[i] !='\0'; i++)
	{
		printf("%s\n", c[i]);
	}
    return 0;
}


// int	main(int argc, char **argv)
// {
// 	if (argc != 3)
// 	{
// 		printf("error\n");
// 		return(1);
// 	}
// 	char	**c;
//     c = malloc(sizeof(char *) * 200);
// 	c = ft_split(argv[1], argv[2]);
// 	for(int i=0; c[i] !='\0'; i++)
// 	{
// 		printf("%s\n", c[i]);
// 	}
//     return 0;
// }

