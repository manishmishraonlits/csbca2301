#include <stdio.h>
#include <math.h>
int main(void)
{
    double n, res;
    printf("Enter a number: ");
    scanf("%lf", &n);
    res = sqrt(n);
    printf("The squareroot of %lf is %lf.\n", n, res);
    return 0;
}