#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char i;

	i = (char)c;
	while (*s != '\0' && *s != c)
		s++;
	if (*s != i)
		return (NULL);
	return ((char*)s);
}
