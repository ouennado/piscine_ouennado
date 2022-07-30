int	ft_atoi(const char *s)
{
	int		i;
	int		signe;
	long	num;

	i = 0;
	signe = 1;
	num = 0;
	while (s[i] <= 32)
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (num * signe);
}
#include<stdio.h>
int main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}

