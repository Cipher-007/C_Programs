#include<stdio.h>

int main()
{
    int kilometer, miles;
    printf("Enter Miles to be converted into Kilometer: ");
    scanf("%d",&miles);
    kilometer=miles*1.60934;
    printf("%d mi is %d Km", miles, kilometer);

    return 0;
}