#include "libft.h"

char	*ft_strrev(char *str)
{
	char	swap;
	int		j;
	int		c;

	j = 0;
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	while (c > j)
	{
		swap = str[c];
		str[c] = str[j];
		str[j] = swap;
		c--;
		j++;
	}
	return (str);
}
