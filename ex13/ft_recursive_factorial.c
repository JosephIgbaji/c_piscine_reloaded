#include <stdio.h>
int ft_recursive_factorial(int nb)
{
	int	sum;

	if (nb <= 1)
	{
		return (1);
	}
	sum = nb;
	sum *= ft_recursive_factorial(nb - 1);
	
	return (sum);
}
int	main(void)
{
	int nb = 5;
	int val = ft_recursive_factorial(nb);
	printf("%d", val);
	return (0);
}
