#include <stdio.h>
int main(void)
{
    int a; 
    float b;
    char c;

    printf("The size of a is %ld bytes.\n", sizeof(a));
    printf("The size of b is %ld bytes.\n", sizeof(b));
    printf("The size of c is %ld byte.\n", sizeof(c));
    return 0;
}