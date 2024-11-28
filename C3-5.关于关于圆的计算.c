#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main()
{
    float r,h;
    scanf("%f",&r);
    scanf("%f",&h);
    printf("l=%.2f\n",2*PI*r);
    printf("s=%.2f\n",pow(r,2)*PI);
    printf("ss=%.2f\n",pow(r,2)*4*PI);
    printf("v=%.2f\n",(4.0/3.0)*PI*pow(r,3));
    printf("vv=%.2f\n",pow(r,2)*PI*h);
    
    return 0;
} 
  