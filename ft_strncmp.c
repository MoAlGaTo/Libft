#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (*s1 && *s2 && *s1 == *s2 && size)
	{
		s1++;
		s2++;
		size--;
	}
	if (0 == size)
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
