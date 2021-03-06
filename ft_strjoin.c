#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (tab == NULL)
		return (NULL);
	tab[0] = '\0';
	ft_strcat(tab, s1);
	ft_strcat(tab, s2);
	return (tab);
}
