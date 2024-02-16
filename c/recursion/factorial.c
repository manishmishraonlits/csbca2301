#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    int f;

    if (n <= 1)
        return 1;

    f = n * factorial(n - 1);
    return f;
}