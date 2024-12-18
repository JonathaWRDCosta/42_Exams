#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char str1[] = "Hellom";
	char str2[] = "Hellob";

	printf("%d\n", ft_strcmp(str1, str2));
}
*/
