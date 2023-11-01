#include <stdio.h>

#define PI 3.14         //Symbolic Constant

main()
{
    float l, b, r, ar, p, ac, c;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    ar = l * b;
    p = 2 * (l + b);
    ac = PI * r * r;
    c = 2 * PI * r;
    printf("Area of rectangle is %1.2f.\n", ar);
    printf("Perimeter of rectangle is %1.2f.\n", p);
    printf("Area of circle is %1.2f.\n", ac);
    printf("Circumference of circle is %1.2f.\n", c);
}