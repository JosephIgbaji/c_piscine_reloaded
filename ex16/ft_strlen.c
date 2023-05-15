/*#include <stdio.h>*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
/*
int main(void)
{
	char str[] = "Jesus is Lord";

	char *word;

	word = str;

	int len = ft_strlen(word);
	printf("%d", len);
	return (0);
}*/
