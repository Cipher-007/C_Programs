#include<stdio.h>

int main(void)
{
    float first, second, third, result;
    printf("Enter Three number: ");
    scanf("%f%f%f",&first,&second,&third);
    printf("First= %f,Second=%f,Third=%f\n",first,second,third);
    result = first+second+third;
    printf("Result=%f",result);

    return 0;
}