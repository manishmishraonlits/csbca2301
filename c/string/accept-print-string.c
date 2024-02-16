#include <stdio.h>

int main(void)
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The entered string is \"%s\".\n", str);
    return 0;
}