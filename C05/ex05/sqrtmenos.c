int	ft_sqrt(int nb)
{
	int	a;
	int	result;

	a = 1;
	result = 0;
	while (nb > 0)
	{
		nb = nb - a;
		result++;
		a += 2;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}