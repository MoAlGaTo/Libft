#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i + 1] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) &&
				(str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
