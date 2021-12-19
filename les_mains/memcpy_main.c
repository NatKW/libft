
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src1[50] = "Bonjour Je m'appelle Nathalie";
	char dest1[50] = "Au Revoir ching ";
	char src2[50] = "Bonjour Je m'appelle Nathalie";
	char dest2[50] = "Au Revoir ching";

	printf("%s\n", (char *)memcpy(dest1, src1, 7));
	//ft_memcpy(dest2, src2, 9);
	printf("%s\n", (char *)ft_memcpy(dest2, src2, 7));
}
