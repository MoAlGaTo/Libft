#include "libft.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i + 1 < size)
	{
		while (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}
