#include <unistd.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}

void ft_print_hex(int n)
{
    char hex_digit[] = "0123456789abcdef";

    if (n >= 16)
        ft_print_hex(n / 16);
    write(1, &hex_digit[n % 16], 1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ft_print_hex((ft_atoi(argv[1])));
    write(1, "\n", 1);
}