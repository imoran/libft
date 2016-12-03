#include "../libft.h"
#include <stdio.h>

void	ft_strlen_test(void)
{
	char	*test_strings[] = { "Isis", "fksgf\0sidufh", ""}; 
	int i = 0;

	while (i < 3)
	{
		size_t a = strlen(test_strings[i]);
		size_t b = ft_strlen(test_strings[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %-12s - %12zu - %12zu - %-s\x1B[0m\n", i + 1, test_strings[i], a, b, test);
		i++;
	}
}
