#include <unistd.h>

char *ft_rev_print(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	while(i-- > 0)
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
	return (str);
}

int main(int argc, char *argv[])
{
	char *str;

	if (argc != 2)
		return (write(1, "\n", 1));
	str = ft_rev_print(argv[1]);
	return (*str);
}
