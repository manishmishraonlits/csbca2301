#include <stdio.h>

int main(void)
{
    int x, y, z;
	int *a=&x, *b=&y, *c=&z;
    printf("The size of *a is %ld bytes.\n", sizeof(a));
    printf("%p, %p, %p\n", a, b, c);
	printf("Enter a number: ");
	scanf("%d", a);
	printf("Enter another number: ");
	scanf("%d", b);
	*c = *a + *b;
	printf("The sum is %d.\n", *c);
	return 0;
}
