#include<stdio.h>
#define PI 3.14

int main()
{
    double radius, area;
    printf("Enter Radius: ");
    scanf("%lf",&radius);
    area=PI*radius*radius;
    printf("Area of circle with radius %lf is %lf", radius, area);

    return 0;
}