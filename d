int	count(int nbr)
{
	int	j;

	j = 1;
	while (nbr > 9)
	{
		j = j * 10;
		nbr = nbr / 10;
	}
	return (j);
}

void	ft_putnbr(int nb)
{
	int	i;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar=('-');
			nb *= -1;
		}
		i = count(nb);
		while (i > 9)
		{
			ft_putchar(nb / i + '0');
			nb = nb - ((nb / i) * i);
			i = i / 10;
		}
		ft_putchar(nb + '0');
	}
}