#include <stdio.h>

void increment();

int main()
{
    for (int i = 1; i <= 5; i++)
        increment();
    return 0;
}

void increment()
{
    static int i;
    i++;
    printf("%d\n", i);
}