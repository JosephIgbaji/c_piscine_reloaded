/*#include <stdio.h>*/
int	ft_sqrt(int nb)
{
	int	square_root;
	int	subtractor;

	square_root = 0;
	subtractor = 1;
	while (nb > 0)
	{
		nb -= subtractor;
		if (nb < 0)
		{
			return (0);
		}
		subtractor += 2;
		square_root++;
	}
	return (square_root);
}
/*
int	main(void)
{
	int n = 169;
	int val = ft_sqrt(n);
	printf("%d", val);
	return (0);
}*/
