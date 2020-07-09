#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char *tab;

	tab = str;
	while (n)
	{
		tab[--n] = '\0';
	}
}
