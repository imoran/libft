#include <string.h>
#include <xlocale.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (!(*l))
		return (b);
	while (len && *b)
	{
		if (*b == l[i])
			i++;
		else
			i = 0;
		if (l[i] == '\0')
			return (b - i + 1);
		b++;
		len--;
	}
	return (NULL);
}

int	main(void)
{
	char *large = "cool Isis";
	char *small = "Isis";
	char *ptr;
	ptr = ft_strnstr(large, small, 9);
	printf("%s", ptr);
}
