#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("----- printf ----- [Edge Cases]\n");
	int a = printf("abc %k"); // "abc %k" ve return 6
	printf("%d", a);
	printf("\n");
	int b = printf("abc %"); // "abc " ve return 4
	printf("%d", b);
	printf("\n");
	int c = printf("%s", NULL); // (null) ve return 6
	printf("%d", c);
	printf("\n");
	int d = printf("%p", NULL); // (nil) ve return 5
	printf("%d", d);

	printf("\n");

	printf("----- ft_printf ----- [Edge Cases]\n");
	a = ft_printf("abc %k"); // "abc %k" ve return 6
	printf("%d", a);
	printf("\n");
	b = ft_printf("abc %"); // "abc " ve return 4
	printf("%d", b);
	printf("\n");
	c = ft_printf("%s", NULL); // (null) ve return 6
	printf("%d", c);
	printf("\n");
	d = printf("%p", NULL); // (nil) ve return 5
	printf("%d", d);

	printf("\n");
	int ret;
	int num = 42;

	printf("----- printf -----\n");

	printf("\n[TEST: %%c]\n");
	ret = printf("%c", 'A'); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%s]\n");
	ret = printf("%s", "Test String"); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%p]\n");
	ret = printf("%p", &num); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%d]\n");
	ret = printf("%d", 42); printf(" | ret: %d\n", ret);
	ret = printf("%d", -2147483648); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%i]\n");
	ret = printf("%i", 42); printf(" | ret: %d\n", ret);
	ret = printf("%i", -2147483648); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%u]\n");
	ret = printf("Unsigned: %u", 4294967295U); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%x]\n");
	ret = printf("%x", 255); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%X]\n");
	ret = printf("%X", 255); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%]\n");
	ret = printf("%%"); printf(" | ret: %d\n", ret);

	printf("\n");

	printf("----- ft_printf -----\n");

	printf("\n[TEST: %%c]\n");
	ret = ft_printf("%c", 'A'); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%s]\n");
	ret = ft_printf("%s", "Test String"); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%p]\n");
	ret = ft_printf("%p", &num); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%d]\n");
	ret = ft_printf("%d", 42); printf(" | ret: %d\n", ret);
	ret = ft_printf("%d", -2147483648); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%i]\n");
	ret = ft_printf("%i", 42); printf(" | ret: %d\n", ret);
	ret = ft_printf("%i", -2147483648); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%u]\n");
	ret = ft_printf("Unsigned: %u", 4294967295U); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%x]\n");
	ret = ft_printf("%x", 255); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%X]\n");
	ret = ft_printf("%X", 255); printf(" | ret: %d\n", ret);

	printf("\n[TEST: %%]\n");
	ret = ft_printf("%%"); printf(" | ret: %d\n", ret);

}
