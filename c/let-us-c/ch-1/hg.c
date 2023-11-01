#include <stdio.h>

int main(void)
{
    int n, d, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    d = n % 10;                     //drawing last digit
    n = n / 10;                     //reducing n to its quotient
    sum = sum + d;                  //adding digit to existing sum

    d = n % 10;
    n = n / 10;
    sum = sum + d;

    d = n % 10;
    n = n / 10;
    sum = sum + d;

    d = n % 10;
    n = n / 10;
    sum = sum + d;

    d = n % 10;
    n = n / 10;
    sum = sum + d;

    printf("The sum is %d.\n", sum);
    return 0;
}