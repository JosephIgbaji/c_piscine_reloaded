#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n < 0)
	{
		c = 'N';
	}
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_is_negative(6);
	ft_is_negative(-1);
	return (0);
}*/
