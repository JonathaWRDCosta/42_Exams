#include <unistd.h>

void ft_camel_to_snake(char *str)
{
    while (*str)
    {
        if (*str >= 65 && *str <= 90)
        {
            *str = *str + 32;
            write(1, "_", 1);
        }
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (write(1, "\n", 1));
    ft_camel_to_snake(argv[1]);
    return (0);
}
