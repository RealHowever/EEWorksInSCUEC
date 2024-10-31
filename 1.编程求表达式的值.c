#include <stdio.h>
#include <math.h>

int main()
{
    double x,y,result;
    scanf("%lf%lf",&x,&y);
    result = sqrt(x+2*y)- exp(x)*exp(x)*exp(x) +fabs(x);
    printf("%lf\n",result);
    return 0;
}
