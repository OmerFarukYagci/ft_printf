#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("----- printf -----\n");
	int a = printf("abc %k"); // "abc %k" ve return 6
	printf("%d", a);
	printf("\n");
	int b = printf("abc %"); // "abc " ve return 4
	printf("%d", b);
	printf("\n");
	int c = printf("%s", NULL); // (null) ve return 6
	printf("%d", c);
	printf("\n");
	int d = printf("%p", NULL); // 
	printf("%d", d);

	printf("\n");

	printf("----- ft_printf -----\n");
	a = ft_printf("abc %k"); // "abc %k" ve return 6
	printf("%d", a);
	printf("\n");
	b = ft_printf("abc %"); // "abc " ve return 4
	printf("%d", b);
	printf("\n");
	c = ft_printf("%s", NULL); // (null) ve return 6
	printf("%d", c);
	printf("\n");
	d = printf("%p", NULL); // 
	printf("%d", d);
}
