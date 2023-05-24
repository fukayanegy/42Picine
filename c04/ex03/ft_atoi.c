#include<stdio.h>
int ft_atoi(char *str);

int main(void)
{
    char aaa[] = "2147483647";
    printf("%d", ft_atoi(aaa));
    return (0);
}

int	ft_atoi(char *str)
{
	int	at[3];

	at[0] = 0;
	at[1] = 0;
	at[2] = 0;
	while ((9 <= str[at[2]] && str[at[2]] <= 13) || str[at[2]] == 32)
		at[2]++;
	while (str[at[2]] == '-' || str[at[2]] == '+')
	{
		if (str[at[2]] == '-')
			at[1] += 1;
		at[2]++;
	}
	while ('0' <= str[at[2]] && str[at[2]] <= '9')
	{
		at[0] *= 10;
		at[0] += str[at[2]] - 48;
		at[2]++;
	}
	if (at[1] % 2 == 1)
		at[0] *= -1;
	return (at[0]);
}
