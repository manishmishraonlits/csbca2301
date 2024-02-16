#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if (a < b && b < c)
        printf("The integer in sorted order are %d, %d and %d.\n", a, b, c);
    else if (a < c && c < b)
        printf("The integer in sorted order are %d, %d and %d.\n", a, c, b);
    else if (b < a && a < c)
        printf("The integer in sorted order are %d, %d and %d.\n", b, a, c);
    else if (b < c && c < a)
        printf("The integer in sorted order are %d, %d and %d.\n", b, c, a);
    else if (c < a && a < b)
        printf("The integer in sorted order are %d, %d and %d.\n", c, a, b);
    else if (c < b && b < a)
        printf("The integer in sorted order are %d, %d and %d.\n", c, b, a);
    return 0;
}