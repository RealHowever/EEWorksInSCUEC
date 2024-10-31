#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    double x,result;
    scanf("%lf",&x);
    result = 1.0/2.0*sin(25.0*PI/180.0)+x*x*cos(30.0*PI/180.0);
    printf("%lf",result);
    return 0;
}
