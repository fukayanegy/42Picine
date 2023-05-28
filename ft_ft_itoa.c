#include "libft.h"

int	ft_power(int a, int b)
{
	int	ans;

	ans = 1;
	while (b != 0)
	{
		ans *= a;
		b--;
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
	size_t	f;
	bool	mai;

	if (!ft_itoa_check(&n, &mai))
		return ("-2147483648");
	i = 0;
	while (n / ft_power(10, i) >= 10)
		i++;
	i++;
	f = 0;
	if (mai)
	{
		ans = malloc(sizeof(char) * (i + 2));
		while (f <= i)
		{
			ans[i - f] = '0' + (n % 10);
			f++;
			n /= 10;
		}
	}
	else
	{
		ans = malloc(sizeof(char) * (i + 1));
		while (f <= i)
		{
			ans[i - f] = '0' + (n % 10);
			f++;
			n /= 10;
		}
		ans[i + 1] = '\0';
	}
	return (NULL);
}

int	main()
{
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}