#include <stdio.h>

int main()
{
    double num1 = 0,num2 = 0,num3 = 0;
    scanf("%lf%lf%lf",&num1,&num2,&num3);
    printf("sum=%.6lf,avg=%.6lf",num1+num2+num3,(num1+num2+num3)/3.0);
    return 0;
} 