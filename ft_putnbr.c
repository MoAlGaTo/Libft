#include "libft.h"

void	ft_putnbr(int nb)
{
	long int c;

	c = nb;
	if (c < 0)
	{
		ft_putchar('-');
		c = -c;
	}
	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else
		ft_putchar(c + '0');
}
