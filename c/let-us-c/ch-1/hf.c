#include <stdio.h>

int main(void)
{
    int c, d, t;
    printf("Enter the value of C: ");
    scanf("%d", &c);
    printf("Enter the value of D: ");
    scanf("%d", &d);
    t = c;
    c = d;
    d = t;
    printf("The values of C and D after interchange are %d and %d, respectively.\n", c, d);
}