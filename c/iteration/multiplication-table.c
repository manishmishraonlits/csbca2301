#include <stdio.h>
int main(void)
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    putchar('\n');
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
