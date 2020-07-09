#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *des;

	des = (unsigned char*)s;
	while (n > 0 && *des != (unsigned char)c)
	{
		des++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (des);
}
