#include "libft.h"

void	ft_strclr(char *s)
{
	int c;
	int d;

	d = 0;
	c = 0;
	if (s == NULL)
		return ;
	while (s[c])
		c++;
	while (c)
	{
		s[d] = '\0';
		d++;
		c--;
	}
}
