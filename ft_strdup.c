#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
