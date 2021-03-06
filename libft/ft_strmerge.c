#include "libft.h"

char	*ft_strmerge(char **str, int space, int size)
{
	char	*res;
	size_t	len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(str[i++]) + space;
	len -= space;
	res = ft_strnew(len);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcat(res, str[i++]);
		while (res[j])
			j++;
		if (i < size && space)
			res[j] = ' ';
		else
			res[j] = '\0';
	}
	return (res);
}
