#include <stdio.h>
#include <math.h>

int main()
{
    double a =0,b = 0,c = 0,s,area;
    scanf("%lf%lf%lf",&a,&b,&c);
    s = (a + b + c)/2.0;
    area = sqrt(s*(s - a)*(s -b)*(s - c));
    printf("%.6lf",area);
    return 0;
}