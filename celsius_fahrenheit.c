#include<stdio.h>

int main(void)
{
    double celsius, fahrenheit;
    printf("Enter Temperatur in fahrenheit to convert into celsius: ");
    scanf("%lf",&fahrenheit);
    celsius=(fahrenheit-32)*0.55555555555;
    printf("%lf F is %lf C",fahrenheit,celsius);

    return 0;
}