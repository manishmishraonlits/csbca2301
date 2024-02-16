#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct date d;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d.day, &d.month, &d.year);
    printf("The entered date is %02d/%02d/%d\n", d.day, d.month, d.year);
    return 0;
}