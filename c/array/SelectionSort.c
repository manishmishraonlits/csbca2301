#include <stdio.h>
#define MAX 100
int main(void)
{
    int n, i, j, t, nums[MAX];

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n > MAX)
    {
        printf("Limit exceeded!\n");
        return 0;
    }

    //------------- INPUT -----------------
    printf("Enter %d integers below:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    //------------ SORTING ----------------
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(nums[i] > nums[j])
            {
                t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }

    //------------ DISPLAY -------------------
    printf("\nThe sorted array is:\n");
    for(i=0; i<n; i++)
        printf("%d\n", nums[i]);

    return 0;
}