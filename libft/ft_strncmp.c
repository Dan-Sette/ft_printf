#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_i;
	unsigned char	*s2_i;

	s1_i = (unsigned char *)s1;
	s2_i = (unsigned char *)s2;
	i = 0;
	while ((s1_i[i] != '\0' || s2_i[i] != '\0') && (i < n))
	{
		if (s1_i[i] != s2_i[i])
			return (s1_i[i] - s2_i[i]);
		i++;
	}
	return (0);
}
