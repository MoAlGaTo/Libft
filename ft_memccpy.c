#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *dt;
	char *str;

	dt = dest;
	str = (char*)src;
	while (n)
	{
		(*dt++) = (*str);
		if ((*str++) == (char)c)
			return (dt);
		n--;
	}
	return (NULL);
}
