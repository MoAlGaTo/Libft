#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char ct;
	char *t;

	t = NULL;
	ct = (char)c;
	while (*str)
	{
		if (*str == ct)
			t = (char*)str;
		str++;
	}
	if (*str == ct)
		return ((char*)str);
	else
		return (t);
}
