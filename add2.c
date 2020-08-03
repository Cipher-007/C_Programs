#include <stdio.h>

int main(void)
{
    float first, second, result;
    printf("Enter Two Numbers: ");
    scanf("%f%f",&first,&second);
    printf("first=%f,second=%f\n",first, second);
    result = first + second;
    printf("sum = %f\n\n",result);
    
    return 0;
}