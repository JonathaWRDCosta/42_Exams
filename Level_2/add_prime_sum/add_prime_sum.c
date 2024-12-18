#include <unistd.h>

int ft_atoi(char *s)
{
	int i;

	i = 0;
	while(*s)
	{
		i = i * 10 + *s - '0';
		s++;
	}
	return (i);
}

int ft_is_prime(int num)
{
	int i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (i);
}

void ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		ft_putnbr(0);
	else
	{
		int nbr;
		int sum;

		nbr = ft_atoi(argv[1]);
		sum = 0;
		while (nbr > 0)
		{
			if (ft_is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
}
