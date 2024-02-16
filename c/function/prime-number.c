#include <stdio.h>
// int countFactors(int n);        //Function declaration/prototype
void welcome();

int main(void)
{
    int n;
    welcome();
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("The integer 1 is neither prime nor composite.\n");      //Function call
        return 0;
    }

    if (countFactors(n) == 2)               //Function call
        printf("The integer %d is prime.\n", n);
    else
        printf("The integer %d is composite.\n", n);
    return 0;
}

//Function definition
int countFactors(int n)         //Function header                 
{
    unsigned int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

void welcome(void)
{
    printf("\n!!welcome!!\n\n");
}
