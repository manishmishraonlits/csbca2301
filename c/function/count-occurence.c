#include <stdio.h> //File inclusion pre-processor directive
#define MAX 10
int countOccurence(int nums[], int size, int target);

int main(void)
{
    int i, nums[MAX], count, target; // Variable Declaration
    printf("Enter 25 integers below:\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter search value: ");
    scanf("%d", &target);

    count = countOccurence(nums, MAX, target);
    printf("There are %d occurences of %d in the array.\n", count, target);
    return 0;
}

int countOccurence(int nums[], int size, int target)
{
    int i, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == target)
        {
            count++;
        }
    }
    return count;
}