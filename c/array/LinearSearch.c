#include <stdio.h>

int main(void)
{
    int i, flag = 0, nums[] = {56, 9, 32, 17, 5}, n = 5, val;

    printf("Enter a the value to search: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++)
    {
        if (nums[i] == val)
        {
            flag = 1;
            break;
        }
    }

    if(flag ==1)
        printf("%d found at index %d.\n", val, i);
    else
        printf("%d not found!\n", val);
    
    return 0;
}