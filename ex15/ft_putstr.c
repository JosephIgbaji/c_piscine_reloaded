/*#include <unistd.h>*/
void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}
/*
int main(void)
{
	char str[] = "Jesus is Lord";

	char *word;

	word = str;

	ft_putstr(word);
	return (0);
}*/
