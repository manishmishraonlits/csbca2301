#include <stdio.h>

int main(void)
{
	float bs, da, hra, gs;
	printf("Enter Ramesh's Basic Salary: ");
	scanf("%f", &bs);
	da = bs * (40.0f/100.0f);
	hra = bs * (20.0f/100.0f);
	gs = bs + da + hra;
	printf("Gross salary %1.2f.\n", gs);
	return 0;
}


