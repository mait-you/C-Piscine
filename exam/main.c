#include <unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			nb = -nb;
			ft_putnbr(nb);
		}
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchr(nb + '0');
}
int main()
{
    ft_putnbr(-24);
}