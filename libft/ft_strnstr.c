#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_lit;

	i = 0;
	len_lit = ft_strlen(little);
	if (!len_lit)
		return ((char *)big);
	while (*big && i < len)
	{
		if (!ft_strncmp(big, little, len_lit) && (i + len_lit) <= len)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
