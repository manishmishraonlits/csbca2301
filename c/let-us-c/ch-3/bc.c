#include <stdio.h>
int main(void)
{
    int n, m, i, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter another number: ");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        p *= n;
    }
    if (m == 2)
        printf("The value of %d squared is %d.\n", n, p);
    else if (m == 3)
        printf("The value of %d cubed is %d.\n", n, p);
    else
        printf("The value of %d raised to the power %d is %d.\n", n, m, p);
    return 0;
}