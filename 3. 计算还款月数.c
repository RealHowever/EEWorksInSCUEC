#include <stdio.h>
#include <math.h>

int main()
{
    int d,p;
    float r;
    double m;
    scanf("%d%d%f",&d,&p,&r);
    m = log10(p/(p-d*r))/log10(1+r);
    printf("%.0lf",ceil(m));
    return 0;
}