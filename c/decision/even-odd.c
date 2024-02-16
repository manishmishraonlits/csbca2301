#include <stdio.h>
int main(void)          //compound statement
{
    int n;
    printf("Enter a number: ");           //simple statement
    scanf("%d", &n);
    
    if(n % 2 == 0)
    {
        printf("%d is even.\n", n);
    }
    else
    {
        printf("%d is odd.\n", n);
    }
    return 0;
}