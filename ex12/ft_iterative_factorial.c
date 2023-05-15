int	ft_iterative_factorial(int nb)
{
	int	sum;

	if (nb <= 0)
	{
		return (0);
	}
	sum = nb;
	while (nb > 1)
	{
		sum *= (--nb);
	}
	return (sum);
}
/*
int	main(void)
{
	int nb = 5;
	int val = ft_iterative_factorial(nb);
	printf("%d", val);
	return (0);
}*/
