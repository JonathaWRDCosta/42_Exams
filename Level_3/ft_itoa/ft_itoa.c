#include <stdlib.h>

int ft_len(int nbr)
{
    int i;

    i = 0;
    if (nbr == 0)
        return (1);
    while (nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}

char	*ft_itoa(int nbr)
{
    int i;
    int len;
    char *c_num;

    i = 0;
    len = ft_len(nbr);
    if (nbr < 0)
        i++;
    len = len + i;
    c_num = (char *)malloc((len + 1) * sizeof(char));
    if (!c_num)
        return (NULL);
    c_num[0] = '-';
    c_num[len] = '\0';
    while ((len - 1) >= i)
    {
        c_num[len - 1] = ft_abs(nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return (c_num);
}