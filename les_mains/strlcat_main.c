

/*
int	main(void)
{
	char src1[50] = "Bonjour Je m'appelle Nathalie";
	char dest1[50] = "Au Revoir ching ";
	char src2[50] = "Bonjour Je m'appelle Nathalie";
	char dest2[50] = "Au Revoir ching ";

	strlcat(dest1, src1, 0);
	printf("dest1: %s", dest1);
	ft_strlcat(dest2, src2, 0);
	printf("dest2: %s", dest2);
	printf("ORIGIN RESULT :%zu\n FT: %zu\n", strlcat(dest1, src1, 0), ft_strlcat(dest2, src2, 0));
}*/

int	main(void)
{
	char src[50] = "hello world";
	char dst[50] = "you";
	printf("%ld\n", strlcat(dst, src, 5));
	printf("%s\n", dst);
	
	char src2[50] = "hello world";
	char dst2[50] = "you";
	printf("%ld\n",ft_strlcat(dst2, src2, 5));
	printf("%s\n", dst);
	return (0);
}