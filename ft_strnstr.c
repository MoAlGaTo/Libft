#include "libft.h"

char			*ft_strnstr(const char *h, const char *n, size_t len)
{
	unsigned int		i;
	size_t				needle_len;
	unsigned int		tab;

	i = 0;
	needle_len = ft_strlen(n);
	if (0 == needle_len)
		return (char *)h;
	while (h[i] && (needle_len + i) <= len)
	{
		tab = 0;
		while (h[tab + i] == n[tab])
		{
			if (tab == (needle_len - 1))
				return (char*)h + i;
			tab++;
		}
		i++;
	}
	return (0);
}
