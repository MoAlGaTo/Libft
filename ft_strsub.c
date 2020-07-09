#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;

	if (s == NULL)
		return (NULL);
	tab = ft_strnew(len);
	if (tab == NULL)
		return (NULL);
	ft_strncpy(tab, s + start, len);
	tab[len] = '\0';
	return (tab);
}
