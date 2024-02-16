#include <stdio.h>

int main(void)
{
    int marks;
    marks = (0 - 100);
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 40)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}