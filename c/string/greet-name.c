#include <stdio.h>
int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Good morning! %s\n", name);
    return 0;
}