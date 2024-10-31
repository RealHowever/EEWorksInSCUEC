#include <stdio.h>
#include <math.h>

int main()
{
    float r,n;
    scanf("%f%f",&r,&n);
    printf("%.1f",powf((1+r),n)/0.01-100);
    
    return 0;
}