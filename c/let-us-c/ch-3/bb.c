#include <stdio.h>
int main(void)
{
    long n, i, f = 1;
    printf("Enter a number: ");
    scanf("%ld", &n);
    for (i = n; i >= 1; i--)
    {
        f *= i;
    }
    printf("Factorial of %ld is %ld.\n", n, f);
    return 0;
}