#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tab;

	if (!(tab = (void*)malloc(sizeof(void) * size)))
		return (NULL);
	return (ft_memset(tab, 0, size));
}
