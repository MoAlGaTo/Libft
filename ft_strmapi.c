#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tab;
	unsigned int	c;

	c = 0;
	if (s)
	{
		tab = ft_strnew(ft_strlen(s));
		if (tab == NULL)
			return (NULL);
		while (s[c])
		{
			tab[c] = f(c, s[c]);
			c++;
		}
		return (tab);
	}
	return (NULL);
}
