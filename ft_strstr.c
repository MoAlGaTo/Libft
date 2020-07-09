#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return ((char*)str + i);
			}
		}
		i++;
	}
	if (!*to_find)
		return ((char*)str);
	else
		return (NULL);
}
