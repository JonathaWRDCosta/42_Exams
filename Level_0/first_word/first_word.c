#include <unistd.h>

char ft_first_word(char *str)
{
	while (*str == 32 || *str == 9)
		str++;
	while (*str && (*str != 32 && *str != 9))
	{	
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (*str);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (write(1, "\n", 1));
	ft_first_word(argv[1]);
}
