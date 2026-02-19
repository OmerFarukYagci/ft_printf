#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int a = printf("abc %k"); // "abc %k" ve return 6
	printf("\n%d", a);
	printf("\n");
	int b = printf("abc %"); // "abc " ve return 4
	printf("\n%d", b);
	printf("\n");
	int c = printf("%s", NULL); // (null) ve return 6
	printf("\n%d", c);
}
