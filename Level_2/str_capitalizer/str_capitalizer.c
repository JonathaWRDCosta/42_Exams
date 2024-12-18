#include <unistd.h>

void ft_strcap(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while(str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
		return (write(1, "\n", 1));
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_strcap(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
